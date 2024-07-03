//12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
main()
{
	int n, rem, sum=0, temp;
	printf("\n\n\t Enter a number to check Armstrong : ");
	scanf("%d",&n); 
	temp=n;
	
	while(n>0)
	{
		rem=n%10;//3  
		sum=sum+(rem*rem*rem);
		n=n/10; 
	}
	
	if(sum==temp)
		printf("\n\n\t Armstrong Number ...");
	else
		printf("\n\n\t Not Armstrong Number ...");
}

