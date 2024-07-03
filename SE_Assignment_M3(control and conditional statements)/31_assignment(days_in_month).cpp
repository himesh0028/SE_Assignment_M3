/*31. Write a program in C to read any Month Number in integer
and display thenumber of days for this month.*/
#include<stdio.h>
main()
{
	int M;
	
	printf("\n\n\t enter month in digits : ");
	scanf("%d",&M);
	
	if(M%2==0){
		printf("\n\n\t number of days in month are 30");
	}else{
		printf("\n\n\t number of days in month are 31");
	}
}
