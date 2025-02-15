#include <stdio.h>

int main() {
    unsigned short n;
    scanf("%d", &n);
    for (int i = 0; i < 8; i++) {
        int a = ((n >> i) & 1);
        int b = ((n >> (15-i)) & 1);
        if (a != b) {
            printf("Not palindrome");
            return 0;
        }
    }
    printf("palindrome");
    return 0;
}