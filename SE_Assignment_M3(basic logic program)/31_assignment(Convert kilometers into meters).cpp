//Convert kilometers into meters

#include<stdio.h>
int main()
{
	int km,m;
	
	printf("\n\n\t enter your kilometer : ");
	scanf("%d",&km);
	
    m = 1000*km;
	
	printf("\n\n\t %d km = %d m",km,m);
}
