#include <stdio.h>
#include <stdlib.h>


// prototyping
void sayHi();
void sayHello(char name[]);
void greetAge(char name[], int age);


// main
int main() {
    sayHi();
    sayHello("Ahammad");
    sayHello("Shawki");
    greetAge("Bot", 13);
    return 0;
}


// functions
void sayHi() {
    printf("Hi User!\n");
}

void sayHello(char name[]) {
    printf("Hello %s!\n", name);
}

void greetAge(char name[], int age) {
    printf("Hello %s, you are %d!\n", name, age);
}