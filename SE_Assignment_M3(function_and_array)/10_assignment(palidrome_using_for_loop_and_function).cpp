//10.WAP to perform Palindrome number using for loop and function.
#include <stdio.h>

// Function to check if a number is a palindrome
int Palindrome(int num) 
{
    int r = 0, n = num;

    // Reverse the number using a for loop
    for ( ;num != 0; num =num/ 10) 
    {
        r = r * 10 + num % 10;
    }

    // Check if the reversed number is the same as the original number
    if (r == n)
        return 1; // True, the number is a palindrome
    else
        return 0; // False, the number is not a palindrome
}

int main() 
{
    int number;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is a palindrome and print the result
    if (Palindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);
    
    return 0;
}

