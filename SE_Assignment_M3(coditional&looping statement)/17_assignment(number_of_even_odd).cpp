/*17. Calculate 5 numbers from user and calculate number of
even and odd usingof while loop
*/

#include<stdio.h>
main()
{
	int n,i,even=0,odd=0;
	i=1;
	while(i<=5){
		printf("\n\n\t enter number [%d] : ",i);
		scanf("%d",&n);
	
		if(n%2==0){
		 			even++;
		}else{
				odd++;
		}
		i++;
	}
	
	printf("\n\n\t number of even = %d",even);
	printf("\n\n\t number of odd = %d",odd);


	
	
}
