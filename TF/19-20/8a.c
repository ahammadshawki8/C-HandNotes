#include <stdio.h>

int main(int argc, char * argv[]) {

    char path[1000];
    sprintf(path, "%s", argv[1]);

    FILE * readFile = fopen(path, "r");
    if (readFile == NULL) {
        printf("%s", path);
        return -1;
    }

    char wpath[1000];
    sprintf(wpath, "%s", argv[2]);

    FILE * writeFile = fopen(wpath, "w");
    if (writeFile == NULL) {
        return -1;
    }
    while(1) {
        char c = getc(readFile);
        if (c == EOF) break;
        fputc(c, writeFile);
    }
    fseek(writeFile, 100, SEEK_CUR);
    fseek(readFile, 10, SEEK_SET);
    printf("%d", ftell(readFile));
    while(1) {
        char c = getc(readFile);
        if (c == EOF) break;
        fputc(c, writeFile);
    }
    fclose(writeFile);
    fclose(readFile);
    
    return 0;
}