#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 20;
    int b = 4;

    // AND
    int c = a & b;
    printf("%d \n", c);

    // OR
    int d = a | b;
    printf("%d \n", d);

    // XOR
    int e = a ^ b; 
    printf("%d \n", e);

    // NOT / COMPLEMENT
    int f = ~a;
    printf("%d \n", f);

    // LEFT SHIFT
    int g = a >> 2;
    printf("%d \n", g);

    // RIGHT SHIFT
    int h = a << 3;
    printf("%d \n", h);
     
    return 0;
}