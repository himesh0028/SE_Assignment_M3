//15. calculate sum of 10 nu bers using while loop
#include <stdio.h>

int main() {
    int sum = 0; // initialize sum to 0
    int i = 1; // initialize counter to 1
    int num; // variable to store each number

    // use a while loop to iterate 10 times
    while (i <= 10) {
        printf("\n\n\t Enter number %d: ", i);
        scanf("%d", &num); // read a number from the user
        sum = sum+num; // add the number to the sum
        i++; // increment the counter
    }

    printf("\n\n\t The sum of the numbers is: %d\n", sum);

    return 0;
}
