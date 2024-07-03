/*19. pattern
	*
   ***
  *****
 *******
*********
*/

#include<stdio.h>
main()
{
	int i,j,n=5;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}for(int k = 1; k <= 2 * i - 1; k++) {
            printf("*"); // print asterisks
        }
		printf("\n");
	}
}
