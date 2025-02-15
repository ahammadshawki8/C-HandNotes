#include <stdio.h>
#include <stdlib.h>
#include <math.h>

union test{
    unsigned int value :6;
    unsigned int value2 :31;

};

int main(){
    union test t;
    //printf("%d %d %d\n" , sizeof(struct X),sizeof(struct Y),sizeof(struct Z));
    //printf("%d %d %d" , sizeof(short),sizeof(int),sizeof(char));
    printf("%d\n",sizeof(t));
    t.value2 = 8; 

    printf("%d %d\n", t.value, t.value2);
    
}