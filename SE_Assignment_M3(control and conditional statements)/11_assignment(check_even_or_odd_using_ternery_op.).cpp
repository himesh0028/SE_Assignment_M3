//11.WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	
	printf("\n\n\t n=%d",n);
	
	n%2==0?printf("\n\n\t number is even. "):printf("\n\n\t number is odd.");
}
