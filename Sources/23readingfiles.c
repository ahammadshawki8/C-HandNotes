#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[255];
    FILE * fPointer = fopen("../Files/employees.txt", "r");
    
    fgets(line, 255, fPointer);
    printf("%s", line);

    fgets(line, 255, fPointer);
    printf("%s", line);

    fclose(fPointer);
    return 0;
}