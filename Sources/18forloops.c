#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    
    for (i; i < 5; i++){
        printf("Loop Counter: %d\n", i);
    }

    
    int sampleArr[] = {23, 56, 4, 24, 0, 14};
    int e = 0;
    
    for (e; e < 6; e++) {
        printf("Current element: %d\n", sampleArr[e]);
    }


    return 0;
}