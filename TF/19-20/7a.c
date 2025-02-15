#include <stdio.h>

typedef struct {
    unsigned int id: 6;
    double temp[365];
    double humidity[365];
    double rain[365];
} District;

int main() {
    District districts[100];
    return 0;
}