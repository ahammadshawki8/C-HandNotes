#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int s = 1;
    int k = n - 1;

    for (s; s<2*n;s+=2) {
        for (int j = 0; j < k; j++) {
            printf(" ");
        }
        for (int i = 0; i < s; i++) {
            if (!((s == 1) || (s == 2 * n-1))) {
                if (i == 0 || i == s-1) {
                    printf("*");
                } else {
                    printf("^");
                }
            } else {
                printf("*");
            }
        }
        k--;
        printf("\n");
    }
    return 0;
}