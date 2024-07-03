//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\t enter the number to find power : ");
	scanf("%d",&a);
	
	printf("First three powers of %d are:\n", a);
    printf("%d^1 = %d\n", a,a);
    printf("%d^2 = %d\n", a,a*a);
    printf("%d^3 = %d\n", a,a*a*a);
}
