#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int getTotalSum(int list_num, char * format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;
    for (int i = 0; i < list_num; i++) {
        for (int j = 0; j < strlen(format); j++) {
            switch(format[j]) {
                case 's': {
                        char * sentence = va_arg(args, char *);
                        for (int k = 0; k < strlen(sentence); k++) {
                            count += (int)sentence[k];
                        }
                        break;
                    }
                case 'i':
                    count += va_arg(args, int);
                    break;
                case 'c': {
                        char c = va_arg(args, char);
                        count += (int) c;
                        break;
                    }
            }
        }
    }
    va_end(args);
    return count;
}

// you cannot change the main function
int main() {
    int total_sum = getTotalSum(2, "sicc", "I am confident", 2, 'p', 'a', "I will pass", 3, 'p', 'b');
    // first argument "2" means 2 lists
    // The first element is a string, the second element is an integer,
    // second argument "sicc" means each list has a total of 4 elements.
    // the third element is a character, and the fourth element is a character.
    // Then a total of 8 arguments are passed as 2 lists each having 4 elements requiring 8 arguments
    printf("%d\n", total_sum);  // prints 2737

    total_sum = getTotalSum(2, "ic", 10, 'A', 20, 'a');
    printf("%d\n", total_sum);  // prints 192 (10 + 65 + 20 + 97)

    return 0;
}
