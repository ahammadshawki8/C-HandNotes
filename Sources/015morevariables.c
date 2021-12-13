#include <stdlib.h>
#include <stdio.h>

#include "015helper.h"

int main() {
    register int x, y, z;
    x = 0;
    y = 8;
    z = 7;
    printf("%d %d %d \n", x, y, z);
    
    extern int externalVAR1;
    extern char externalVAR2[];

    printf("%d", externalVAR1);
    printf("%s", externalVAR2);
    return 0;
}