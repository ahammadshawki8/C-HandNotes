#include <stdio.h>

int main() {
    int i = 8, j = 5, k;
    float x = 0.005, y = -0.01;
    char c = 'c', d = 'd';

    k = (int)((float)((i-3*j) % (c+2*d))/(x-y));
    printf("%d", k);
    return 0;
}