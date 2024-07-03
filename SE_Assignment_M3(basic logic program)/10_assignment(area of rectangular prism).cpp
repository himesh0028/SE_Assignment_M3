//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int l,w,h,Area_of_prism;
	
	printf("\n\n\t enter the length of side of rectangular prism : ");
	scanf("%d",&l);
	
	printf("\n\n\t enter the width of side of rectangular prism : ");
	scanf("%d",&w);
	
	printf("\n\n\t enter the height of side of rectangular prism : ");
	scanf("%d",&h);
	
	Area_of_prism = 2 * ( w * l + h * l + h * w );
	
	printf("\n\n\t the area of rectangular prism is : %d",Area_of_prism);
	
}
