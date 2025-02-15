#include <stdio.h>

int negate(int x) {
    return ~x + 1;
}

int isNotEqual(x,y) {
    if(x^y) return 1;
    return 0;
}

void copyLSB(int * x) {
    if (*x & 1) *x = -1;
    else *x = 0;
}

int isPositive(int x) {
    return !((x >> 31) & 1);
}

int main() {
    printf("%d\n", negate(5));
    printf("%d\n", isNotEqual(5,8));
    int p = 8;
    copyLSB(&p);
    printf("%d\n", p);
    printf("%d\n", isPositive(-150));
    return 0;
}