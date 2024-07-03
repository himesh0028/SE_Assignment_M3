//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;
    for ( i = 1; i <= n; i++) {
        
        	printf("%d",i);
        if (i < n) {
            printf(" + ");
        }	
		
    }

    printf("\n");

    return 0;
}
