//10.Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int s, l;

    // Get the input string from the user
    printf("Enter a string: ");
    gets(str);

    // Get the start position and length for the substring
    printf("Enter the start position: ");
    scanf("%d", &s);
    printf("Enter the length of the substring: ");
    scanf("%d", &l);

    // Ensure start position and length are within bounds
    if (s < 0 || s >= strlen(str) || s + l > strlen(str) || l < 0) {
        printf("Invalid start position or length\n");
        return 1;
    }

    // Extract the substring
    strncpy(sub, str + s, l);
    sub[l] = '\0'; // null-terminate the substring

    // Print the extracted substring
    printf("Extracted substring: %s\n", sub);

    return 0;
}

