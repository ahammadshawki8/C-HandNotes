#include <stdio.h>
#include <limits.h>

int isPositive(int n) {
    return ((INT_MIN ^ n) >> 31);
}

int main() {
    printf("%d", (-5 >> 31));
    return 0;
}