// 19)Calculate compound interest
#include<stdio.h>
main()
{
	int p;
	float r,t,A,i;
	
	printf("\n\n\t enter principal amount : ");
	scanf("%d",&p);
	
	printf("\n\n\t enter rate of intrest : ");
	scanf("%f",&r);
	
	printf("\n\n\t enter number of years : ");
	scanf("%f",&t);
	
	A = p*(1+(r/100))*t;
	
	printf(".......................................");
	
	printf("\n\n\t total amount after %.2f years = %f ",t,A);
	
	i=A-p;
	
	printf("\n\n\t compund intrest = %.2f",i);
	
	
	
}
