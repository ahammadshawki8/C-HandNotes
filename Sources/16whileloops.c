#include <stdio.h>
#include <stdlib.h>

int main () {
    int index = 1;
    while (index <= 5) {
        printf("Sorry, I won't do that again :(((\n");
        index++;
    }

    do {
        printf("Thanks for forgiving me :)))\n");
        index++;
    } while (index <= 6);

    return 0;
}