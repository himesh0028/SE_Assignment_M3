/*23.C Program to Reverse a Number Using FOR Loop
*/
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0,remainder;
    
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &number);
    
    originalNumber = number;
    
    // Reverse the number using a for loop
    for (number>0 ;number != 0; number /= 10) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    
    printf("Original number: %d\n", originalNumber);
    printf("Reversed number: %d\n", reversedNumber);
    
    return 0;
}

