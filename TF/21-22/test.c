#include <stdio.h>

typedef struct {
    int f1: 3;
    unsigned int f2: 3;
    unsigned int f3: 30;
    unsigned int f4: 3;
} FLAG;

int main() {
    printf("%d", sizeof(FLAG));
    return 0;
}