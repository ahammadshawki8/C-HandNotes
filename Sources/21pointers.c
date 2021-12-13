#include <stdio.h>
#include <stdlib.h>

int main() {
    // pointer is a datatype which is just the memory address.

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    
    // when we create a pointer value inside of a pointer variable,
    // we need to store the memory address of another variable which is inside of this program.
    // storing the pointer variable.
    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;

    printf("age's memory address: %p \n", pAge);
    
    // dereferencing (*)
    printf("The value of age: %d \n", *pAge);


    return 0;
}