/*14.Accept 5 numbers from user and find
those numbers factorials
*/
#include<stdio.h>
main()
{
	int n,F=1,i,j;
	
	for(i=1;i<=5;i++){
		printf("\n\n\t enter number to find [%d] factorial : ",i);
		scanf("%d",&n);
	}
	
	for(j=n;j>=1;j--){
		F=F*j;
		
	}
	
		for(i=1;i<=5;i++){
		printf("\n\n\t factorial of %d is %d ",n,F);
	}
	
	
	
}
