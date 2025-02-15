#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int** mult( int** A , int rA, int cA, int ** B , int rB, int cB){
    if( cA != rB)return NULL;

    int **c = (int **)malloc(rA*(sizeof(int *)));
    assert(c != NULL);
    for(int i = 0 ; i< rA; i++){
        *(c+i) = (int *)malloc(cB*(sizeof(int)));
        assert(*(c+i) != NULL);
    }

    for(int i = 0 ; i < rA ; i++){
        for(int j = 0 ; j < cB; j++){
            int sum = 0;
            for(int k = 0 ; k < cA ; k++){
                sum += *(*(A+i)+k) * *(*(B+k)+j);
            }
            *(*(c+i)+j) = sum;
        }
    }
    
    return c;
}

int main(){
    int rA, cA, rB, cB;
    scanf("%d %d %d %d", &rA, &cA, &rB, &cB);    
    int **a = (int **)malloc(rA*(sizeof(int *)));
    assert(a != NULL);
    for(int i = 0 ; i< rA ; i++){
        *(a+i) = (int *)malloc(cA*(sizeof(int)));
        assert(*(a+i) != NULL);
    }

    int **b = (int **)malloc(rB*(sizeof(int *)));
    assert(b != NULL);
    for(int i = 0 ; i< rB ; i++){
        *(b+i) = (int *)malloc(cB*(sizeof(int)));
        assert(*(b+i) != NULL);
    }

    for(int i = 0 ; i< rA ; i++){
        for(int j = 0 ; j< cA ; j++){
            scanf("%d", *(a+i)+j);
        }
    }
    
    for(int i = 0 ; i< rB ; i++){
        for(int j = 0 ; j< cB ; j++){
            scanf("%d", *(b+i)+j);
        }
    }
    
    int **c =  mult( a , rA, cA, b , rB, cB);
    if(c != NULL){
        for(int i = 0 ; i< rA ; i++){
            for(int j = 0 ; j< cB ; j++){
                printf("%d ", *(*(c+i)+j));
            }
            printf("\n");
        }
    }else{
        printf("ahis");
    }
    
}