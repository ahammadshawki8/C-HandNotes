#include <stdio.h>

int getStdCode(int stdID) {
    int year = 2000 + stdID / 100000;
    int dept = (stdID % 100000) / 1000;
    int serial = (stdID % 1000);

    return (((year << 9) | dept) << 9) | serial;
}

int getStdID(int stdCode) {
    int year = ((stdCode & -1) >> 18) % 2000;
    int dept = ((stdCode << 14) & -1) >> 23;
    int serial = ((stdCode << 23) & -1) >> 23;

    printf("%d %d %d\n", year, dept, serial);

    return serial + dept * 1000 + year * 100000;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", getStdCode(n));
    printf("%d", getStdID(getStdCode((n))));
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getStdcode(int stdcode){
    int res = 0;
    int yr = (stdcode/100000) + 2000;
    int dept = (stdcode/1000)%100;
    int serial = stdcode % 1000;
    res |= yr<<18;
    res |= dept<<9;
    res |= serial;
    return res;
}

int getStdID(int stucode){
    int serial = (stucode << 23) >> 23;
    stucode >>= 9;
    int dept = (stucode << 23) >> 23;
    stucode >>=9;
    int year = (stucode << 19) >> 19;
    return (year%100)*100000+dept*1000+serial;
}


int main(){
    int stu = 2305085;
    printf("%x\n", getStdcode(stu));
    printf("%d", getStdID(getStdcode(stu)));
}*/