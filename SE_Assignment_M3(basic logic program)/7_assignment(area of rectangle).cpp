//Find area of Rectangle Formula : A=wl

#include<stdio.h>
int main()
{
	int w,l,Area;
	
	printf("\n\n\t enter length of side of retangle : ");
	scanf("%d",&l);
	
	printf("\n\n\t enter width of side of rectangle : ");
	scanf("%d",&w);
	
	Area = w * l;
	
	printf("\n\n\t the area of rectangle is : %d",Area);
}
