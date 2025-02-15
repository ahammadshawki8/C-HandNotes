#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int ** take_input(int m, int n) {
    int ** mul = (int **) malloc(m * sizeof(int*));
    assert(mul != NULL);
    for (int i = 0; i < m; i++) {
        *(mul+i) = (int *) malloc (n * sizeof(int));
        assert(*(mul + i) != NULL);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(mul+i)+j));
        }
    }

    return mul;
}

void print_mul(int **mul, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(mul+i)+j));
            
        }
        printf("\n");
    }
}

void free_mul(int **mul, int m, int n) {
    for (int i = 0; i < m; i++) {
        free(*(mul+i));
    }
    free(mul);
}

int **matmul(int ** mul1, int **mul2, int m1, int n1, int m2, int n2) {
    if (n1 != m2) return NULL;

    int ** mul = (int **) malloc(m1 * sizeof(int*));
    assert(mul != NULL);
    for (int i = 0; i < m1; i++) {
        *(mul+i) = (int *) malloc (n2 * sizeof(int));
        assert(*(mul + i) != NULL);
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            int sum = 0;
            for (int k = 0; k < n2; k++) {
                sum += *(*(mul1 + i)+k) * *(*(mul2 + k) + j);
            }
            *(*(mul + i)+j) = sum;
        }
    }

    return mul;
}

int main() {
    int rA, cA, rB, cB;
    scanf("%d %d %d %d", &rA, &cA, &rB, &cB);
    printf("%d %d %d %d", rA, cA, rB, cB);

    int **a = take_input(rA, cA);
    int **b = take_input(rB, cB);
    print_mul(&a, rA, cA);


    // int **c = matmul(a, b, rA, cA, rB, cB);
    // if (c != NULL) {
    //     printf("ahis");
    //     print_mul(c, rA, cB);
    //     free_mul(c, rA, cB);
    // }
    // free_mul(a, rA, cA);
    // free_mul(b, rB, cB);
    return 0;
}