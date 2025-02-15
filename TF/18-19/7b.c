#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char * argv[]) {
    int len = argc-1;
    int * heights = (int *) malloc(len * sizeof(int));
    assert(heights != NULL);

    for (int i = 0; i < len; i++) {
        heights[i] = atoi(argv[i+1]);
    }

    for (int i = 0; i < len-1; i++) {
        for (int j = i; j < len; j++) {
            if (heights[i] < heights[j]) {
                int temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;
            }
        }
    }

    printf("%d", heights[0] - heights[len-1]);
    free(heights);
    
    return 0;
}