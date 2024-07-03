//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int as,bs,cs,ds,es;
	char a,b,c,d,e;
	float avg;
	
	printf("\n\n\t enter first employe name: ");
	scanf(" %c",&a);
	
	printf("\n\n\t enter second employe name: ");
	scanf(" %c",&b);
	
	printf("\n\n\t enter third employe name: ");
	scanf(" %c",&c);
	
	printf("\n\n\t enter fourth employe name: ");
	scanf(" %c",&d);
	
	printf("\n\n\t enter fifth employe name: ");
	scanf(" %c",&as);
	
	printf("\n\n\t ...............................");
	
	
	printf("\n\nt enter first employee salary : ");
	scanf("%d",&as);
	
	printf("\n\nt enter second employee salary : ");
	scanf("%d",&bs);
	
	printf("\n\nt enter third employee salary : ");
	scanf("%d",&cs);
	
	printf("\n\nt enter fourth employee salary : ");
	scanf("%d",&ds);
	
	printf("\n\nt enter fifth employee salary : ");
	scanf("%d",&es);
	
	printf("\n\n\t .........................................");
	
	
	avg= (as+bs+cs+ds+es)/5;
	
	printf("\n\n\t average salary = %f",avg);
	
	
	
}
