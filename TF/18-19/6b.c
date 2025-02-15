#include <stdio.h>

void printBinary(unsigned int x) {
    if (x == 0) return;
    printBinary(x/2); 
    if (x % 2 == 0) printf("0");
    else printf("1");
    return; 
}

int main() {
    printBinary(25);
    return 0;
}