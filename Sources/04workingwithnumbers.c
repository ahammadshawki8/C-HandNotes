#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%f\n", 9.7);
    printf("%f\n", 9.8 + 8.9);
    printf("%f\n", 9.8 - 8.9);
    printf("%f\n", 9.8 * 8.9);
    printf("%f\n", 9.8 / 8.9);

    printf("%f\n", 9 + 8.9); // int-float = float
    printf("%d\n", 5 + 4); // int-int = int
    
    printf("%d\n", 5 / 4); // floor
    printf("%f\n", 5 / 4.0);

    // functions
    printf("%f\n", pow(2, 3)); 
    printf("%f\n", sqrt(81));
    printf("%f\n", ceil(56.68));
    printf("%f\n", floor(56.68));
    return 0;
}