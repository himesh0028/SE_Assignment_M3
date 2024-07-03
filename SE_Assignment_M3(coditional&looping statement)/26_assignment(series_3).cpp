//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n,i,sum,j;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The series is: ");
    for ( i = 1; i <= n; i++) {
        sum = 0;
        printf("(");
        for ( j = 1; j <= i; j++) {
            sum = sum + j;
            printf("%d", j);
            if (j < i) {
                printf("+");
            }
        }
        printf(")");
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}
