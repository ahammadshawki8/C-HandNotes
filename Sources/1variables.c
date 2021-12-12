#include <stdio.h>
#include <stdlib.h>

int main () {
    char myName[] = "Ahammad Shawki";
    int myAge = 16;
    char myProfession[] = "highschooler";
    char myPassion[] = "coder";

    printf("My name is %s.\n", myName);
    printf("I am %d years old.\n", myAge);
    printf("I am a %s by profession,\n", myProfession);
    printf("And a %s by passion.", myPassion);

    myAge ++;
    printf("Next week I will become %d years old!", myAge);
    
    return 0;
}