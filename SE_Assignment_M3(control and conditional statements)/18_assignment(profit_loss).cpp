//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int cp,sp,p,l;
	
	printf("\n\n\t enter cost price : ");
	scanf("%d",&cp);
	printf("\n\n\t enter selling price : ");
	scanf("%d",&sp);
	
	p=sp-cp;
	l=cp-sp;
	
	if(sp>cp){
		printf("\n\n\t your profit is : %d",p);
	}else if(cp>sp){
		printf("\n\n\t your loss is : %d",l);
	}else {
		printf("\n\n\t you have no profit or loss");
	}
}
