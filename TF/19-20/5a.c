#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int order = 0;
    int cng = 0;
    for (int i = 0; i < n-1; i++) {
        if (numbers[i] > numbers[i+1]) {
            if (order == 2) cng = 1;
            order = 1;
        } else if (numbers[i] < numbers[i+1]) {
            if (order == 1) cng = 1;
            order = 2;
        }
    }

    if (cng) printf("NOT SORTED");
    else {
        if (order == 1) printf("SORTED\nDESCENDING\n");
        else printf("SORTED\nASCENDING");
    }
    return 0;
}