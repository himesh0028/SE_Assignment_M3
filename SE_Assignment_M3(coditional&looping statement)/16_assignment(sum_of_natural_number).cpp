//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("\n\n\t Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum+i;
        i++;
    }

    printf("\n\n\t The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
