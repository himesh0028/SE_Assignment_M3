//33. WAP to input the week number and print week day.
#include<stdio.h>
main()
{
	int W,D;
	
	printf("\n\n\t enter number of weeks : ");
	scanf("%d",&W);
	
	D=W*7;
	
	printf("\n\n\t number of days in %d weeks is : %d",W,D);
}
