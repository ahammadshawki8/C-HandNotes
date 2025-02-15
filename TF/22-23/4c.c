#include <stdio.h>

int truncate(float x) {
    int a = x;
    return a;
}
int rounding(float x) {
    int a = x - 0.5;
    return a;
}
int ceiling(float x) {
    int a = (-x);
    return -a;
}

int main() {
    float n;
    scanf("%f", &n);
    printf("%d\n%d\n%d", truncate(n), rounding(n), ceiling(n));
    return 0;
}