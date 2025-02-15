#include <stdio.h>

int main() {
    int a = 0x7c5;
    float x = 13.25;
    printf("%-07X %#7g %10.3e", a, x, x);
    return 0;
}