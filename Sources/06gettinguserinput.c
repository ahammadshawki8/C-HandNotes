#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int userAge;
    double userGPA;
    char userGrade;
    char userName[10];

    printf("Enter your age: ");
    scanf("%d", &userAge); // pointer

    printf("Enter your GPA: ");
    scanf("%lf", &userGPA); // %lf

    printf("Enter your grade: ");
    scanf(" %c", &userGrade); // need to use a space before %c

    printf("Enter your name: ");
    scanf("%s", userName); // No need to use & in string

    printf("You are %d years old.\n", userAge);
    printf("You got %f GPA.\n", userGPA);
    printf("Your grade is %c.\n", userGrade);
    printf("Hello %s!\n", userName);

    
    char userFullName[20];
    printf("Enter you fullname: ");
    fgets(userFullName, 20, stdin);
    userFullName[strlen(userFullName)-1] = '\0';  // replacing \n with a null character \0
    printf("Hello %s!\n", userFullName);
    

    return 0;
}