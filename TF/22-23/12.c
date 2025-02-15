
#include <stdio.h>

#define SQ(x) (x*x)
#define CUB(x) (x*x*x)
#define F_POW(x) ((SQ(CUB(x)))/(SQ(SQ(SQ(x)))))

int main() {
    printf("%f %f %f", SQ(2.0), CUB(2.0), F_POW(2.0));
    return 0;
}

a=1011
b=1001

a ^= b

a = 1101
b ^= a

1011

a ^= b 
1001