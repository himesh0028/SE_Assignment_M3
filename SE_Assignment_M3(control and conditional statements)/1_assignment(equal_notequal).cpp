//Write a C program to accept two integers and check whether they are equalor not.
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t enter value fo n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t enter value fo n2 : ");
	scanf("%d",&n2);
	
	if(n1==n2){
		printf("\n\n\t both integers are equal");
	}else{
		printf("\n\n\t both integers are not equal");
	}
	
}
