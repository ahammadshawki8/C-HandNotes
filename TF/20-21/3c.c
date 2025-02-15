#include <stdio.h>

double sine(double x) {
    x = (x * 3.14159) / 180.0;  // Convert degrees to radians
    printf("%g\n", x);
    double total = 0.0;  // Use double instead of int

    for (int i = 1; i < 10; i += 2) {
        double k = x, f = 1.0, sign = 1.0;

        for (int j = 2; j <= i; j++) {
            k *= x;
            f *= j;
        }

        if ((i / 2) % 2) sign = -1.0;  // Alternating sign
        printf("i=%d pow=%g fact=%g\n", i, k, f);
        total += sign * (k / f);
    }

    return total;
}

int main() {
    printf("%f\n", sine(30));
    return 0;
}
