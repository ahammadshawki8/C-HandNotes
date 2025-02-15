#include <stdio.h>

int main() {
    int p[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("%d\n", **p);
    printf("%d\n", *(*(*p+1)+2));
    printf("%d\n", *(**(p+2)));
    printf("%d\n", *(*p+1)+1);
    return 0;
}