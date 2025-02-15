#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    int freq[1000] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            freq[a[i][j]]++;
        }
    }

    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j) && (freq[a[i][j]] == 1)) cnt++;
            else if ((i+j == n-1) && (freq[a[i][j]] == 1)) cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}