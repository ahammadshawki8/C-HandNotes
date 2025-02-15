#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        str[i] = ((((str[i]) - 97) + 2) % 26) + 97;
    }
    printf("%s", str);
    return 0;
}