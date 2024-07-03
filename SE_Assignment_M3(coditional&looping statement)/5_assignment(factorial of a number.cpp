//5. WAP to print factorial of given number

#include<stdio.h>
main(){
	
	int n,i,z;
	
	printf("\n\n\t enter factorial number : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		z=z*i;
	
	}
	printf("\n\n\t factorial = %d",z);
}
