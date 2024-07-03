/*22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
#include<math.h>
int main()
{
	float R,t,P,i,A;
	
	printf("\n\n\t enter principal amount : ");
	scanf("%f",&P);
	
	printf("\n\n\t enter rate of intrest : ");
	scanf("%f",&R);
	
	printf("\n\n\t enter number of years : ");
	scanf("%f",&t);
	
	 A = P * pow((1 + R / 100), t);
	 
	 i=A-P;
	 
	 printf("\n\n\t amount after compond intrest is : %f",A);
	 printf("\n\n\t your compound intrest is : %f",i);
}
