//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	int salary;
	float premium;
	
	printf("\n\n\t enter your salary : ");
	scanf("%d",&salary);
	
	printf("\n\n\t your monthly premium would be 12 percent of your monthly salary");
	
	premium = salary * 12 / 100;
	printf("\n\n\t your monthly premium is %f",premium);
}
