#include <stdio.h>
int N = 5;
int num[5] = {10, 20, 30, 40, 50};

int deleteSorted(int x) {
    int idx = 0;
    int found = 0;
    for (int i = 0; i <= N; i++) {
        if (num[i] == x) {
            found = 1;
            idx = i;
            break;
        }
        if (num[i] > x) {
            break;
        }
    }

    if (!found) return -1;
    else {
        for (int i = idx; i < N-1; i++) {
            num[i] = num[i+1];
        }
        N--;
    }
}
int main() {
    deleteSorted(20);
    for (int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    deleteSorted(60);
    for (int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    deleteSorted(10);
    for (int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    deleteSorted(50);
    for (int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}