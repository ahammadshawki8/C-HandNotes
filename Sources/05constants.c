#include <stdio.h>
#include <stdlib.h>


// All definaions are constant
#define MAX 100
#define TRUE 1
#define FALSE 0
#define PI 3.141592
#define MAJOR "Computer Science"

int main() {
    const int NUM = 5;
    printf("%d\n", NUM);
    /*
    NUM = 7;
    printf("%d\n", NUM);
    */

    printf("Hello\n");
    printf("%d\n", 90);
    
    return 0;
}