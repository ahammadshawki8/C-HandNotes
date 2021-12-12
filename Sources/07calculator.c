#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    double add = num1 + num2;
    printf("%f + %f = %f\n", num1, num2, add);

    double sub = num1 - num2;
    printf("%f - %f = %f\n", num1, num2, sub);

    double mul = num1 * num2;
    printf("%f * %f = %f\n", num1, num2, mul);

    double div = num1 / num2;
    printf("%f / %f = %f\n", num1, num2, div);

    return 0;
}