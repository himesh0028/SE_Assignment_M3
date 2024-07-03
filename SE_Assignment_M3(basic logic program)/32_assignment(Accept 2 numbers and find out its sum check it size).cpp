//Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("\n\n\t enter number 1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t enter number 2 : ");
	scanf("%d",&n2);
	
	n3=n1+n2;
	
	printf("\n\n\t n3=%d",n3);
	
	printf("\n\n\t size = %d",sizeof(n3));
	
	
}
