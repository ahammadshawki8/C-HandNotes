#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNumbers[] = {8, 7, 77, 10, 1, 0};
    printf("%d\n", luckyNumbers[0]);

    luckyNumbers[3] = 100;
    printf("%d\n", luckyNumbers[3]);

    int blankArray[10];
    blankArray[1] = 50;
    printf("%d\n", blankArray[1]);
    printf("%d\n", blankArray[0]);

    // string is an array
     
    return 0;
}