//Convert years into days and months
#include<stdio.h>
int main()
{
	float years,days,month;
	
	printf("\n\n\t enter years : ");
	scanf("%f",&years);
	
	days = 365*years;
	month = 12*years;
	
	printf("\n\n\t %.2f years = %.2f days ",years,days);
	
	printf("\n\n\t %.2f years = %.2f months ",years,month);
}
