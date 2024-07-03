//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main()
{
	int b,h,Area;
	
	printf("\n\n\t enter height of triangle : ");
	scanf("%d",&h);
	
	printf("\n\n\t enter length of base of triangle : ");
	scanf("%d",&b);
	
	Area = 0.5 * b * h;
	
	printf("\n\n\t the area of triangle is : %d ",Area);
}
