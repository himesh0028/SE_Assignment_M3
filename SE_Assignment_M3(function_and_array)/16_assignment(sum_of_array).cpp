//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int n[5],i,sum;
	
	for(i=0;i<=4;i++){
		printf("\n\n\t enter number[%d] : ",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t n[%d] : %d",i,n[i]);
		sum=sum+n[i];
	}
	printf("\n\n\t Sum = %d",sum);
	
	
}
