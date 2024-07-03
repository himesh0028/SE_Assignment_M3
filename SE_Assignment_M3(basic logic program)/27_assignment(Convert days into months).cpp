//27.Convert days into months
#include<stdio.h>
main()
{
	int D;
	float M;
	
	printf("\n\n\t enter number of days : ");
	scanf("%d",&D);
	
	M=D/30;
	
	printf("\n\n\t %d days = %.2f month",D,M);
	
}
