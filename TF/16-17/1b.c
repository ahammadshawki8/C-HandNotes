#include <stdio.h>
#include <math.h>
#include <string.h>

void print_int (int n) {
    int len = ceil(log10(n)/3);
    char bigs[100];
    char s[100];
    for (int i = 1; i <= len; i++) {
        int val = n % 1000; 
        sprintf(s, "%d", val);
        strcat(bigs, s);
        if (i != len) strcat(bigs, ",");;
        n /= 1000;
    }

    for (int i = 0; i < strlen(bigs)-1; i++) {
        printf("%c", bigs[strlen(bigs)-i-1]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_int(n);
    return 0;
}