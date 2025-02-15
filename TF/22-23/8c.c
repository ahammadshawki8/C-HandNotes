#include <stdio.h>

int main(int argc, char * argv[]) {
    char path[100];
    sprintf(path, "%s", argv[1]);

    FILE * readFile = fopen(path, "r");
    if (readFile == NULL) {
        // printf(stderr, "File can't be open");
        return 1;
    }
    int total = 0;
    int val = 0;
    while(fscanf(readFile, "%d", &val) == 1) {
        if (val % 2) total += val;
        // printf("%d\n", val);
    }
    printf("%d", total);
    fclose(readFile);
    return 0;
}