//1. Write a program to find out the max number from given array using function
#include<Stdio.h>
void max();
main()
{
	max();
	
}

void max(){
	
	int n1,n2;
	printf("\n\n\t enter number 1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t enter number 2 : ");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("\n\n\t %d is maximum ",n1);
	}else{
		printf("\n\n\t %d is maximum",n2);
	}
}
