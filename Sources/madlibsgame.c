#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20];
    char pluralNoun[20];
    char personF[20];
    char personL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a person: ");
    scanf("%s%s", personF, personL);

     
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", personF, personL);

    return 0;
}