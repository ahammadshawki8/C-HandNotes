#include <stdio.h>

int binSearch(int *list, int low, int high, int value) {
    int mid = (high+low)/2;
    if (high < low) return -1;
    else if (*(list+mid) == value) return mid;
    else if (*(list+mid) < value) return binSearch(list,mid + 1, high, value);
    else if (*(list+mid) > value) return binSearch(list,low, mid-1, value);
}

int main() {
    int num[10] = {10, 20 ,30 , 40, 50, 60};
    printf("%d", binSearch(num, 0, 5, 10));
    return 0;
}