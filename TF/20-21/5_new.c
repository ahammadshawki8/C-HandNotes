#include <stdio.h>
#include <string.h>

int isPalindrome(char *name, int n) {
    for (int i = 0; i * 2 < n; i++) {
        if (name[i] != name[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *readfile = fopen("in.txt", "r");
    if (readfile == NULL) {
        return 1;
    }

    FILE *writefile = fopen("out.txt", "a+");
    if (writefile == NULL) {
        fclose(readfile);
        return 1;
    }

    char name[100];  // Increased buffer size
    int val;

    while (fscanf(readfile, "%s %d", name, &val) == 2) {
        printf("%s %d\n", name, val);

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
