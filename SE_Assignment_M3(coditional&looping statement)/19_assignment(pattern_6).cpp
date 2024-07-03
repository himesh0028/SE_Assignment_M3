/*19. patern
	A
	A B
	A B C
	A B C D E 
	A B C D E F
*/
#include<stdio.h>
main()
{
	int i,j,n;
	char alphabet='A';
	
	printf("\n\n\t enter number of lines to print : ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		alphabet='A';
		for(j=1;j<=i;j++){
			printf(" %c",alphabet);
			alphabet++;
		
		}
		printf("\n");
	}
}
