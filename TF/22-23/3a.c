#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    int freq[1001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n ;i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 1001; i++) {
        if (freq[i] > 1) printf("%i ", i);
    }
    return 0;
}