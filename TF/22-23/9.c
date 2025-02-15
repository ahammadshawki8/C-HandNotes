#include <stdio.h>

char * dbl_dbl(char * str, char ch) {
    char * new_str = (char *)malloc(1000 * sizeof(char));
    char * q = new_str;
    char * p = str;
    while(*p) {
        *q=*p;
        if (*p == ch) {
            q++;
            *q = *p;
        }
        p++;
        q++; // <- extra
    } 
    *q = '\0';
    return new_str;
}


int main() {
    char * word = dbl_dbl("aa", 'a');
    printf("%s", word);
    return 0;
}