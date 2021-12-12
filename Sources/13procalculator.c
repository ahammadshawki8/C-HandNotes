#include <stdlib.h>
#include <stdio.h>


void proCalc(double num1, double num2, char op);


int main() {
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1); 
    printf("Enter the op: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &num2); 

    proCalc(num1, num2, op);
    return 0;
}


void proCalc(double num1, double num2, char op) {
    double answer;

    if (op == '+') {
        answer = num1 + num2;
    } else if (op == '-') {
        answer = num1 - num2;
    } else if (op == '*') {
        answer = num1 * num2;
    } else if (op == '/') {
        answer = num1 / num2;
    } else {
        printf("Invalid Operator!");
        return;
    }

    printf("ANSWER: %f\n", answer);
}