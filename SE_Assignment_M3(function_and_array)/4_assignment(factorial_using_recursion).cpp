//4. WAP to find factorial using recursion
#include<stdio.h>

int factorial(int);

main()
{
	int n, fact;
	
	printf("\n\n\t Enter a number to find out the factorial : ");
	scanf("%d",&n); //4
	
	fact=factorial(n); //4
	
	printf("\n\n\t Factorial of the number %d :",fact);
}

int factorial(int n) //4
{
	if(n==0)
		return 1;
		
	else
		return n*(factorial(n-1)); //recursion
}
