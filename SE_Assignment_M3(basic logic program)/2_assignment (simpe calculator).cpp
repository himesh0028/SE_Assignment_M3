

#include<stdio.h>
int main()
{
	int a,b,cs,cd,cm,ca;
	
	printf("\n\n\t enter your first value : ",a);
	scanf("%d",&a);
	
	printf("\n\n\t enter your second value : ",b);
	scanf("%d",&b);
	
	cs=a+b;
	cm=a-b;
	cd=a/b;
	ca=a*b;
	
	printf("\n\n\t the sum of your number is : %d",cs);
	printf("\n\n\t the subtraction of your number is : %d",cm);
	printf("\n\n\t the division of your number is : %d",cd);
	printf("\n\n\t the multiplication of your number is : %d",ca);
}
