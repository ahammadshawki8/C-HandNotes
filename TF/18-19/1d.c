#include <stdio.h>
#include <string.h>

int main() {
    FILE * readfile = fopen("C:\\Users\\DELL\\Desktop\\TF solver\\18-19\\1d.c", "r");
    if (readfile == NULL) return -1;

    FILE * writefile = fopen("C:\\Users\\DELL\\Desktop\\TF solver\\18-19\\rcopy.c", "w");
    if (writefile == NULL) return -1;

    char content[1000000];
    int i = 0;
    while(1) {
        char c = fgetc(readfile);
        if (c == EOF) break;
        content[i] = c;
        i++;
    }

    int size = strlen(content);
    for (int i = 0; i < size; i++) {
        fputc(content[size-i-1], writefile);
    }

    fclose(writefile);
    fclose(readfile);


    return 0;
}