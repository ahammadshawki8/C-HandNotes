#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char name[25];
    char major[25];
    int age;
    double gpa;
};


int main() {
    struct Student student1;
    student1.age = 17;
    student1.gpa = 3.81;

    /* If we dont initialize the string while declaring, it will become array.
    And so we cant just assign a string value for that array. We have to use strcpy() function.*/
    strcpy(student1.name, "Ahammad Shawki");
    strcpy(student1.major, "CS");

    printf("%f \n", student1.gpa);
    printf("%s \n", student1.name);


    struct Student student2;
    student2.age = 16;
    student2.gpa = 3.67;
    strcpy(student2.name, "Mr. Unknown");
    strcpy(student2.major, "Business");

    printf("%f \n", student2.age);
    printf("%s \n", student2.major);
    return 0;
}