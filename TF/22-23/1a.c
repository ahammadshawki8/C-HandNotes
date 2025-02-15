#include <stdio.h>

int main() {
    int speed;
    char response;

    printf("Enter your travelling speed: ");
    scanf("%i", &speed);

    if (speed <= 100) {
        printf("0$");
    } else {
        printf("Do you have any previous ticket(y/n): ");
        getchar();
        scanf("%c", &response);

        if (response == 'n') {
            if (speed < 121) printf("50$");
            else if (speed > 120) printf("80$");
        } else {
            printf("150$");
        }
    }


}