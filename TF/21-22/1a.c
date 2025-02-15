#include <stdio.h>

int myceil(double n) {
    int ans;
    if (n > 0) {
        ans = (n + 1);
    } else {
        ans = n;
    }
    return ans;
}

int myfloor(double n) {
    int ans;
    if (n > 0) {
        ans = n;
    } else {
        ans = (n- 1);
    }
    return ans;
}


int main() {
    double n;
    scanf("%lf", &n);
    printf("%d\n%d", myceil(n), myfloor(n));
    return 0;
}