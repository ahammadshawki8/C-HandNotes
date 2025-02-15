#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char word[1000];

    scanf("%s %s", sentence, word);
    int count = 0;
    char * p = sentence;
    while(1) {
        char * t = strstr(p, word);
        if (t == NULL || *p == '\0') break;
        p = t + 1;
        count++;
    }
    printf("%d", count);
    return 0;
}