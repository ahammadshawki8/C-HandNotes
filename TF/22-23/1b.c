#include <stdio.h>
#include <math.h>

int isPrime(long n) {
    if (n < 2) return 0;
    for (int i = 2; pow(i, 2) <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n = 1;
    int cnt = 0;

    while(cnt < 5) {
        int ans = pow(2,n)-1;
        // printf("%d %d\n", ans, isPrime(ans));
        if (isPrime(ans)) {
            printf("%li\n", ans);
            cnt++;
        } 
        n += 1;
    }
    return 0;
}