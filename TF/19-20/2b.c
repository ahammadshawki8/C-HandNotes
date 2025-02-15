#include <stdio.h>

int rstrcmp(char s[], char t[], int i) {

    if ((s[i] == '\0') && (t[i] == '\0')) return 0;
    if ((s[i] == '\0') || (s[i] < t[i])) return -1;
    if ((t[i] == '\0') || (t[i] < s[i])) return 1;
    
    return rstrcmp(s, t, i+1);
}

int main() {
    char s[11] = "bangladesh";
    char t[11] = "bangladesh";
    printf("%i", rstrcmp(s, t, 0));
    return 0;
}