//3. Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>

// Function to find the length of the string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    int length;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to safely read the input string

    // Find the length of the string
    length = stringLength(str);

    // Print individual characters in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (int i = length - 1; i >= 0; i--) {
        // Only print characters if they are not newline or null terminator
        if (str[i] != '\n' && str[i] != '\0') {
            printf("Character [%d]: %c\n", i, str[i]);
        }
    }

    return 0;
}

