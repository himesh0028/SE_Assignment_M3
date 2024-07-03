//2. Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to safely read the input string

    // Print individual characters
    printf("Individual characters in the string:\n");
    while (str[i] != '\0') {
        // Only print characters if they are not newline or null terminator
        if (str[i] != '\n' && str[i] != '\0') {
            printf("Character [%d]: %c\n", i, str[i]);
        }
        i++;
    }

    return 0;
}


