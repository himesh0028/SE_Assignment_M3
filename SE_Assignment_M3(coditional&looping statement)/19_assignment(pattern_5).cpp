/*19. pattern
	1
	2 3
	4 5 6 
	7 8 9 10
	11 12 13 14 15
*/
#include<stdio.h>
main()
{
	int i,j,n=1,a;
	
	printf("\n\n\t enter number of lines to print : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf(" %d",n);
			n++;
		}
		printf("\n");
	}
}
