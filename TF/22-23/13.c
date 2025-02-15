#include <stdio.h>

typedef union {
    char name[11];
    int id;
} student;


int main() {
    student AllStudents[100];
    return 0;
}