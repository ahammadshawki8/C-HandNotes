#include <stdlib.h>
#include <stdio.h>

int main() {

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    /* for multi-dimensional array we need to specify the size. */

    printf("%d", nums[2][0]);

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Current elemment: %d\n", nums[i][j]);
        }
    }

    return 0;
}