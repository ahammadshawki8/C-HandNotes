#include <stdio.h>

int largest(int x[], int n) {
    if (n == 0) return 0;
    if (x[n-1] > largest(x, n-1)) return x[n-1];
    else return largest(x, n-1);
}

int main() {
    int num[6] = {15, 20, -3, 4, 5, 6};
    printf("%d", largest(num, 6));
    return 0;
}