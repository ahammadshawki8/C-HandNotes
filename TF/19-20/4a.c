#include <stdio.h>
#include <string.h>

int search(char sentence[], char word[]) {
    
}

int main() {
    char sentence[1000];
    char word[100];
    fgets(sentence, 100, stdin);
    // getchar();
    scanf("%s", word);
    for (int i = 0; i*2 < strlen(word); i++) {
        char temp = word[i];
        word[i] = word[strlen(word)-i-1];
        word[strlen(word)-i-1] = temp;
    }
    // printf("%s\n%s", sentence, word);
    char * f = strstr(sentence, word);
    if (f == NULL) printf("NOT FOUND\n");
    else printf("%d\n", f - sentence);
    return 0;
}