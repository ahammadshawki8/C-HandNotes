#include <stdio.h>
#include <string.h>

int isPalindrome(char * name, int n) {
    for (int i = 0; i*2 < n; i++) {
        if (name[i] != name[n-i-1]) {
            return 0;
        }
    }
    return 1;
} 

int main() {
    FILE * readfile = fopen("C:\\Users\\DELL\\Desktop\\TF solver\\20-21\\in.txt", "r");
    if (readfile == NULL) {
        printf("file nai");
        return 1;
    }

    FILE * writefile = fopen("C:\\Users\\DELL\\Desktop\\TF solver\\20-21\\out.txt", "a+");
    if (writefile == NULL) {
        return 1;
    }

    char name[100];
    int val;
    
    while ((fscanf(readfile,"%s %d", name, &val)) == 2){
        //printf("%s %d\n", name, val);
        if (isPalindrome(name, strlen(name))) {
            fprintf(writefile, "%s ", "Palindrome");
        } else {
            fprintf(writefile, "%s ", "Not Palindrome");
        }
        if (val % 2 == 0) {
            fprintf(writefile, "%s\n", "Even");
        } else {
            fprintf(writefile, "%s\n", "Odd");
        }
    }
    
    fclose(writefile);
    fclose(readfile);
    return 0;
}