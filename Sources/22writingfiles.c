#include <stdlib.h>
#include <stdio.h>

int main() {
    // write
    FILE * fPointer = fopen("../Files/employees.txt", "w"); 

    fprintf(fPointer, "Ahammad, Team Lead\n");
    fprintf(fPointer, "Fiha, Content Creator\nArko, Project Contributor\n");

    fclose(fPointer);

    // append
    FILE * fNewPointer = fopen("../Files/employees.txt", "a"); 

    fprintf(fNewPointer, "Essam, Content Creator\n");

    fclose(fNewPointer);
    return 0;
}