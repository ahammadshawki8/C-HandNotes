#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans = n % 10;

    switch (ans)
    {
    case 2:
    case 4:
    case 6:
    case 8:
        printf("YES\n");
        break;
    
    default:
        printf("NO\n");
        break;
    }
    return 0;
}