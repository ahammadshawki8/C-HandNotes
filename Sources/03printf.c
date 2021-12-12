#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello\nWorld\n"); //skip
    printf("Hello\"World\n");

    printf("%d", 20); //format specifier
    printf("My favourite %s is %f", "number", 500.79);

    char myChar = 'o';
    printf("The value is %c", myChar);
    
    return 0;
}
