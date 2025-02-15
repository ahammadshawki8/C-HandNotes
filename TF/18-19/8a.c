#include <stdio.h>

int order(char * str1, char *str2) {
    char *p = str1;
    char *q = str2;

    while(*p && *q && (*p == *q)) {
        p++;
        q++;
    }
    if (*p < *q) return -1;
    else if (*p > *q) return 1;
    else return 0;
}

int main() {
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    printf("%s\n%s\n", a, b);
    printf("%d", order(a, b));
    return 0;
}