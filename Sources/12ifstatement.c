#include <stdio.h>
#include <stdlib.h>


int findMax2(int num1, int num2);
int findMax3(int num1, int num2, int num3);
void drinkCoffee(char weather[], char coder[]);


int main() {
    printf("MAX: %d \n", findMax2(40, 40));
    printf("MAX: %d \n", findMax3(40, 45, 170));
    drinkCoffee("cold", "true");
    return 0;
}


int findMax2(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int findMax3(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

void drinkCoffee(char weather[], char coder[])  {
    if (weather == "rainy" || coder == "true") {
        printf("I am having Coffee!");
    } else {
        printf("I don't want Coffee.");
    }
}