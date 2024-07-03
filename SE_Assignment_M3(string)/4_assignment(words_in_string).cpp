//4. Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>

int count_words(char *str) {
    int count = 0;
    char *token = strtok(str, " ");
    while (token!= NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove newline character
    int word_count = count_words(str);
    printf("Total number of words: %d\n", word_count);
    return 0;
}
