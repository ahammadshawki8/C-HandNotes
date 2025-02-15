#include <stdio.h>
#include <math.h>

int isPalindrome(int x) {
    int len = ceil(log10(x));   
    printf("%d\n", len);

    for (int i = 1; i < len; i+=2) {
        int k = x / pow(10, len-i);
        int j = x % (int)(10);
        
        if (k != j) {
            return 0;
        }

        x = ((x % (int) pow(10, len - i)) / 10);
        printf("%d %d %d\n", k, j, x);
    }

    return 1;
}

int main() {
    printf("%d", isPalindrome(12344321));
    return 0;
}