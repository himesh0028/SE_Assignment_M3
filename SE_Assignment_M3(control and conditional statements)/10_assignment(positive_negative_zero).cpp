//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	
	printf("\n\n\t n=%d",n);
	
	if(n>0){
		printf("\n\n\t number is positive");
	}else if(n<0){
		printf("\n\n\t number is negative ");
	}else {
		printf("\n\n\t number equals to zero");
	}
}
