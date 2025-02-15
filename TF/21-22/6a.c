#include <stdio.h>


int process_char_vowel(char c) {
    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) return 1;
    else return 0;
}
int process_char_cons(char c) {
    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) return 0;
    else return 1;
}

int count_char_types(char * mystr, int func(char)) {
    int count = 0;
    while(*mystr) {
        count += func(*mystr);
        mystr++;
    }
    return count;
}


int main() {
    char *str = "i am confident i will pass this exam!!!";
    int (*callback_ptr_vowel)(char) = process_char_vowel;
    int (*callback_ptr_cons)(char) = process_char_cons;
    
    int total_vowels = count_char_types(str, callback_ptr_vowel);
    int total_cons = count_char_types(str, callback_ptr_cons);
    
    printf("%d\n", total_vowels);
    printf("%d\n", total_cons);
    
    return 0;
}
