#include <stdio.h>
#include <string.h>
#include <time.h>

#define TOTAL_ACCOUNTS_AT_MOST 1000
#define TOTAL_TRANSACTIONS_AT_MOST 10000

int CURRENT_ACC_COUNT = 0;
int CURRENT_TRAN_COUNT = 0;

typedef enum {
    SAVINGS,
    CURRENT
} AccountType;

typedef enum {
    WITHDRAW,
    DEPOSIT,
    TRANSFER
} TransactionType;

typedef struct {
    int date;
    int month;
    int year;
} Date;

typedef struct {
    Date date;
    int hour;
    int mins;
    int seconds;
} Time;

typedef struct {
    char *name;
    int accountNumber;
    int balance;
    AccountType type;
    Date dob;
    Time openingTime;
} Account;

typedef struct {
    Account *sentFrom;
    Account *sentTo;
    Time time;
    int amount;
    TransactionType type;
} Transaction;

Account allAccounts[TOTAL_ACCOUNTS_AT_MOST];
Transaction allTransactions[TOTAL_TRANSACTIONS_AT_MOST];

Time getCurrentTime() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t); 

    int year = tm_info->tm_year + 2000; 
    int month = tm_info->tm_mon + 1;    
    int day = tm_info->tm_mday; 
    int hour = tm_info->tm_hour;
    int min = tm_info->tm_min;
    int sec = tm_info->tm_sec;

    Date mydate;
    mydate.date = day;
    mydate.month = month;
    mydate.year = year;

    Time mytime;
    mytime.date = mydate;
    mytime.hour = hour;
    mytime.mins = min;
    mytime.seconds = sec;

    return mytime;
}

// Create an account and add the account to allAccounts array
// Set account opening time by calling the function getCurrentTime
Account *createAccount(char *name, int accountNumber, int initialBalance, AccountType type, Date dob) {
    Account * new_acc;
    new_acc -> name = name;
    new_acc -> accountNumber = accountNumber;
    new_acc -> balance = initialBalance;
    new_acc -> type = type;
    new_acc -> dob = dob;
    new_acc -> openingTime= getCurrentTime();

    allAccounts[CURRENT_ACC_COUNT] = *new_acc;
    CURRENT_ACC_COUNT++;
    return new_acc;
};


// Search for the account number given
Account *searchAccount(int accountNumber) {
    for (int i = 0; i < TOTAL_ACCOUNTS_AT_MOST; i++) {
        if (allAccounts[i].accountNumber == accountNumber) {
            return &(allAccounts[i].accountNumber);
        }
    }
    return NULL;
}

// Add balance to an account number. Add a transaction to the allTransactions array
void addBalance(int account, int amount) {
    Account * my_acc = searchAccount(account);
    if (my_acc != NULL) {
        my_acc -> balance += amount;

        Transaction new_tran;
        new_tran.sentFrom = NULL;
        new_tran.sentTo = my_acc;
        new_tran.time = getCurrentTime();
        new_tran.type = DEPOSIT;

        allTransactions[CURRENT_TRAN_COUNT] = new_tran;
        CURRENT_TRAN_COUNT++;
    }


}

// Withdraw balance. Add a transaction to the allTransactions array
void withdrawBalance(int account, int amount) {
    Account * my_acc = searchAccount(account);
    if (my_acc != NULL) {
        if (my_acc -> balance >= amount) {
            my_acc -> balance -= amount;

            Transaction new_tran;
            new_tran.sentFrom = my_acc;
            new_tran.sentTo = NULL;
            new_tran.time = getCurrentTime();
            new_tran.type = WITHDRAW;

            allTransactions[CURRENT_TRAN_COUNT] = new_tran;
            CURRENT_TRAN_COUNT++;
        }
    }
}

// Transfer balance from one account to another account. Add a transaction to the allTransactions array
void transferBalance(int from, int to, int amount) {
    Account * from_acc = searchAccount(from);
    Account * to_acc = searchAccount(to);

    if ((from_acc != NULL) && (to_acc != NULL)) {
        if (from_acc -> balance >= amount) {
            from_acc -> balance -= amount;
            to_acc -> balance += amount;

            Transaction new_tran;
            new_tran.sentFrom = from_acc;
            new_tran.sentTo = to_acc;
            new_tran.time = getCurrentTime();
            new_tran.type = TRANSFER;

            allTransactions[CURRENT_TRAN_COUNT] = new_tran;
            CURRENT_TRAN_COUNT++;
        }
    }
}

// Print all transactions of an account
void printTransactions(int account) {
    Account * my_acc = searchAccount(account);
    if (my_acc != NULL) {
        for (int i = 0; i < TOTAL_TRANSACTIONS_AT_MOST; i++) {
            if ((allTransactions[i].sentFrom == my_acc) && (allTransactions[i].type = WITHDRAW)) {
                printf("WITHDRAWAL -> -$ %d\n", allTransactions[i].amount);
            } else if ((allTransactions[i].sentTo == my_acc) && (allTransactions[i].type = DEPOSIT)) {
                printf("DEPOSIT -> +$ %d\n", allTransactions[i].amount);
            } else if ((allTransactions[i].sentFrom == my_acc) && (allTransactions[i].type = TRANSFER)) {
                printf("TRANSFER -> -$ %d\n", allTransactions[i].amount);
            } else if ((allTransactions[i].sentTo == my_acc) && (allTransactions[i].type =TRANSFER)) {
                printf("TRANSFER -> +$ %d\n", allTransactions[i].amount);
            } 
        }
    }
}


int main () {
    getCurrentTime();
    return 0;
}