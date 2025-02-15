#include <stdio.h>

int main() {
    int freq[10000] = {0};

    float mat[6][6] = 
    {{231, 187, 178, 194, 203, 190},
    {202, 195, 198, 195, 204, 192},
    {214, 197, 179, 196, 200, 197},
    {230, 190, 180, 198, 201, 187},
    {224, 219, 193, 200, 201, 186},
    {231, 123, 189, 201, 203, 197}};

    float total = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            total += mat[i][j];
            freq[(int)mat[i][j]]++;
        }
    }

    float avg = total / 36;

    float error[6][6];
    int error_original[6][6];
    float error_list[36];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            error[i][j] = mat[i][j] - avg;
            error_original[i][j] = freq[(int)mat[i][j]];
        }
    } 

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%f ", error[i][j]);
        }
        printf("\n");
    } 

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", error_original[i][j]);
        }
        printf("\n");
    } 

    return 0;
}