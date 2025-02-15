#include <stdio.h>
int freq[10000] = {0};


int febonacci(int n) {
    if ((n == 1) || (n == 2)) return 1;
    if (freq[n] != 0) return freq[n];
    else return freq[n] = (febonacci(n-1) + febonacci(n-2));
}

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    int flag = 0;
    while(1) {
        if (febonacci(i) > n) break;
        if (febonacci(i) == n) flag = 1;
        sum += febonacci(i);
        i++;
        // printf("%d\n", sum);
    }

    if (flag == 1) printf("YES\n");
    else printf("NO\n");
    printf("%d\n", sum);
    return 0;
}