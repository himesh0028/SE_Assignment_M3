/*Write a C program to read the value of an integer m and display
the value ofn is 1 when m is larger than 0, 0 when m is 0 and -1
when m is less than 0
*/
#include<stdio.h>
main()
{
	int m,n;
	
	printf("\n\n\t enter value of m : ");
	scanf("%d",&m);
	
	if(m>0){
		printf("\n\n\t n=1");
	}else if(m==0){
		printf("\n\n\t n=0");
	}else {
		printf("\n\n\t n=-1");
	}
}
