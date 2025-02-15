#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int ans = ~(x^y);
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        cnt += (ans & 1);
        ans = (ans >> 1);
    }
    printf("%d", cnt);
    return 0;
}