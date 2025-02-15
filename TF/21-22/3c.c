#include <stdio.h>

int main() {
    char hex_val[17] = "0123456789ABCDEF";
    int n;
    scanf("%d", &n);

    char rev_ans[1000];

    int i = 0;
    while(1) {
        int rem = n % 16;
        n /= 16;
        rev_ans[i] = hex_val[rem];
        i++;
        if (n == 0) break;
    }
    rev_ans[i] = '\0';
    
    for (int k = 0; k*2 < i; k++) {
        char temp = rev_ans[k];
        rev_ans[k] = rev_ans[i-k-1];
        rev_ans[i-k-1] = temp;
    }

    printf("%s", rev_ans);

    return 0;
}