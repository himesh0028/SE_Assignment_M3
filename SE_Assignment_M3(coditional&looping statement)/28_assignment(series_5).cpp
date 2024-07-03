//28. 1 2 3 6 9 18 27 54...
#include<stdio.h>

int main() {
    int n,i;
    printf("\n\n\t Enter the number of terms: ");
    scanf("%d", &n);

    double term = 1;
    printf("\n\n\t The series is: ");
    for ( i = 0; i < n; i++) {
        printf(" %.0f,", term);
        term = term * 1.5;
    }
    printf("\n");

    return 0;
}
