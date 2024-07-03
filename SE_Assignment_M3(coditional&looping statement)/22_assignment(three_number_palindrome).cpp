/*22. Accept 3 numbers from user using while loop and
check each numberspalindrome
*/
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber, remainder;
    int count = 0;


    while (count < 3) {
    	printf("\n\n\t enter number [%d] : ",count);
        scanf("%d", &number);

        originalNumber = number;
        reversedNumber = 0;

        // Reversing the number
        while (number > 0) {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        // Checking if palindrome
        if (originalNumber == reversedNumber)
            printf("\n\n\t %d is a palindrome.\n", originalNumber);
        else
            printf("\n\n\t %d is not a palindrome.\n", originalNumber);

        count++;
    }

    return 0;
}

