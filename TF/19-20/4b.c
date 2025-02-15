#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    fgets(sentence, 1000, stdin);
    int size = strlen(sentence);
    sentence[size-1] = '\0';

    int cnt = 0;
    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (flag == 0) cnt++;
            flag = 1;
        } else {
            flag = 0;
        }
    }

    printf("%d", cnt);
    return 0;
}