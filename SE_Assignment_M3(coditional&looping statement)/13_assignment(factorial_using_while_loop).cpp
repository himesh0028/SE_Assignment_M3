#include<stdio.h>

int main() {
    int F = 1;  
    int n, i;

    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    i = n;
    while (i >= 1) {  
        F = F * i;
        i--;
    }
    
    printf("Factorial of %d is %d\n", n, F);  
    
    return 0;
}

