//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float avg;
	
	printf("\n\n\t enter your first expense : ");
	scanf("%d",&a);
	
	printf("\n\n\t enter your second expense : ");
	scanf("%d",&b);
	
	printf("\n\n\t enter your third expense : ");
	scanf("%d",&c);
	
	printf("\n\n\t enter your fourth expense : ");
	scanf("%d",&d);
	
	printf("\n\n\t enter your fifth expense : ");
	scanf("%d",&e);
	
	avg=(a+b+c+d+e)/5;
	
	printf("\n\n\t your avrage is %f",avg);
}
