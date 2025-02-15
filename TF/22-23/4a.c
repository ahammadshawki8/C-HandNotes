#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

char * num2str(int n) {
    int len = ceil(log10(n));
    char * str = (char *)malloc((len+1)*sizeof(char));
    assert(str != NULL);
    sprintf(str, "%i", n);
    str[len] = '\0';

    return str;
}

int main() {
    int n;

    scanf("%d", &n);

    char * p = num2str(n);

    while(*p != '\0') {
        printf("%c", *p);
        p++;
    }
    return 0;
}