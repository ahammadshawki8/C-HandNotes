#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float ans = (((a >= b) && (a >= c))*a) + (((b >= a) && (b >= c))*b) + (((c >= a) && (c >= b))*c);
    printf("%f", ans);
    return 0;
}