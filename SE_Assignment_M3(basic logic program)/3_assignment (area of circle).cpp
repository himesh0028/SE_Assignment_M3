//write a progrm to find area and circumference of circle

#include<stdio.h>
#define pi 3.14
int main()
{
	float a,r;
	
	printf("\n\n\t enter radius of circle : ");
	scanf("%f",&r);
	
	a =pi * r * r;
	printf("\n\n\t area of circle is %f ",a);
}
