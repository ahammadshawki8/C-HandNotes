#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];

    scanf("%s %s", a, b);

    int best = 0;
    char p[100];

    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) { 
            char c[j-i+1];
            for (int k = 0; k < j-i+1; k++) {
                c[k] = a[i+k];
            }
            c[j-i+1] = '\0';

            char * t = strstr(b, c);
            if (t != NULL) {
                if ((j-i+1) > best) {
                    best = (j-i+1);
                    strcpy(p, c);
                }
            }
        }
    }

    printf("%s\n", p);
    return 0;
}