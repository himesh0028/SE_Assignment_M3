/*8. Write a program to find out the max from given number
(E.g., No: -1562Max number is 6)
*/
#include<stdio.h>
main()
{
	int num,max=0,n;
	
	printf("\n\n\t enter a number : ");
	scanf("%d",&num);
	while(num > 0)
    {
    	max=num%10;
    	if(num>max){
    		max=num;
		}
	
	
	num /= 10;
	}
	printf("\n\n\t maximum number = %d",max);
	
}
