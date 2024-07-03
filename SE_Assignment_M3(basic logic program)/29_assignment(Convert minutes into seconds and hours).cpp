//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	float min,sec;
	
	printf("\n\n\t enter minutes : ");
	scanf("%f",&min);
	
	sec = 60*min;
	
	printf("\n\n\t %.2f min = %.2f sec",min,sec);
}
