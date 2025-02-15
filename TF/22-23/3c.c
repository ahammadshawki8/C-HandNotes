#include <stdio.h>
#include <math.h>

int main() {
    int n;
    char d;

    scanf("%d %c", &n, &d);

    int len = log10(n);
    char str[len+1];
    sprintf(str, "%i", n);

    for (int i = 0; i*2 < len; i++) {
        char temp = str[i];
        str[i] = str[len-i];
        str[len-i] = temp;
    }

    printf("%c%s", d, str);
    return 0;
}