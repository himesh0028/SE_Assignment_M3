//Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary
#include<stdio.h>
int main()
{
	int salary,monthly_salary;
	float premium,installment;
	
	printf("\n\n\t enter your monthly salary :  ");
	scanf("%d",&salary);
	
	premium = (salary*10)/100;
	printf("\n\n\t your insurance premium is : %f",premium);
	
	installment = (salary*10)/100;
	printf("\n\n\t your loan installment is : %f",installment);
	
	monthly_salary = salary - premium - installment;
	
	printf("\n\n\t your monthly salary is : %d",monthly_salary);
	
	
	
}
