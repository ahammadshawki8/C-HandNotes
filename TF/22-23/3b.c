#include <stdio.h>

int main() {
    int m, n;
    scanf("%i %i", &m, &n);

    int arr_1[m];
    int arr_2[n];

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr_1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_2[i]);
    }

    for (int i = 0; i < m; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr_1[i] == arr_2[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) printf("%d ", arr_1[i]); 
    }
    return 0;
}