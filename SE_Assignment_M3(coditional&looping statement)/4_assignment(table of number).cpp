//4. WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n\n\t enter table no. : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf(" %d * %d = %d ",n,i,n*i);
	printf("\n");
}
}
