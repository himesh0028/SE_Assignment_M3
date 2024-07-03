//8.Calculate person’s Annual salary
#include<stdio.h>
int main()
{
	int basic_salary,bonus,Annual_salary;
	float pt;
	
	printf("\n\n\t enter your basic salary : ");
	scanf("%d",&basic_salary);
	
	printf("\n\n\t enter your bonus : ");
	scanf("%d",&bonus);
	
	pt = basic_salary * 3/100;
	
	printf("\n\n\t your pt is %f ",pt);
	
	Annual_salary = basic_salary + bonus - pt;
	
	printf("\n\n\t your Annual salary is %d",Annual_salary);	
	
}
