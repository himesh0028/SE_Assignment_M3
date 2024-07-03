//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	float year,days;
	
	printf("\n\n\t enter number of years : ");
	scanf("%f",&year);
	
	days = year*365;
	printf("\n\n\t %.2f year = %.2f days",year,days);
	
	printf("\n\n\t ............................");
	
	printf("\n\n\t eneter number of days : ");
	scanf("%f",&days);
	
	year = days/365;
	
	printf("\n\n\t %.2f days = %.2f years",days,year);
}
