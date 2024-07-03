//14.WAP to find the largest of three numbers.
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n\n\t input a : ");
	scanf("%d",&a);
	printf("\n\n\t input b : ");
	scanf("%d",&b);
	printf("\n\n\t input c : ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("\n\n\t %d is largest",a);
	}else if(b>a && b>c){
		printf("\n\n\t %d is largest",b);
	}else{
		printf("\n\n\t %d is largest",c);
	}
}
