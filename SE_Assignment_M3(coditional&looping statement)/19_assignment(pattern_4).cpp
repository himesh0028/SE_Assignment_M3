/*19. pattern
	*
	* *
	* * *
	* * * *
	* * * * *
	* * * *
	* * *
	* *
	*
*/
#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("\n\n\t enter number of lines to print : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=n;i>=1;i--){
		for(j=1;j<i;j++){
			
			printf("* ");
		}
		printf("\n");
	}
}
