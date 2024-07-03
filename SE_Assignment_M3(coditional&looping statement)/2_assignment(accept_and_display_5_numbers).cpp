//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main()
{
	int num[5],i;
	
	for(i=0;i<5;i++){
		printf("\n\n\t enter number [%d] : ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n\n\t number[%d] : %d",i+1,num[i]);
	}
}
