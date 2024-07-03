//6. Write a program in C to count the total number of alphabets, digits and specialcharacters in a string.

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove newline character

    int alphabet_count = 0;
    int digit_count = 0;
    int special_char_count = 0;

    for (int i = 0; str[i]!= '\0'; i++) {
        if (isalpha(str[i])) {
            alphabet_count++;
        } else if (isdigit(str[i])) {
            digit_count++;
        } else {
            special_char_count++;
        }
    }

    printf("Total number of alphabets: %d\n", alphabet_count);
    printf("Total number of digits: %d\n", digit_count);
    printf("Total number of special characters: %d\n", special_char_count);

    return 0;
}
