/*19. patterns.
	A
	B C
	D E F
	G H I J 
	K L M N O
*/
#include<stdio.h>
main()
{
	int i,j,n;
	char C='A';
	
	printf("\n\n\t enter the number of lines  : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %c ",C);
			C++;
		}
		printf("\n");
	}
}
