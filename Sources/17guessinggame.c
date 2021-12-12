#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretKey = 9;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretKey && outOfGuesses == 0) {
        if (guessCount != 0) {
            if (guess > secretKey) {
                printf("Guess Lower\n");
            } else {
                printf("Guess Higher\n");
            }
        }
        if (guessCount < guessLimit) {
            printf("Guess the secret key: ");
            scanf("%d", &guess);
            guessCount ++;
        } else {
            outOfGuesses = 1;
        }
    }
    
    if (outOfGuesses == 1) {
        printf("Out of guesses :(((");
    } else {
        printf("You Win :)))");
    }

    return 0;
}