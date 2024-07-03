//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers
#include<stdio.h>
int main()
{
	int i=1,n,sum_of_even,sum_of_odd;
	
	printf("\n\n\t enter you limit : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(i%2==0){
			printf("\n %d even number",i);
		}else{
			printf("\n %d odd number ",i);
		}
	
	//	printf("\n\n\t %d",i);
		i++;
	}
	
	for(i=2;i<=10;i++){
	
		sum_of_even=sum_of_even + i;
	}
	for(i=1;i<=9;i++){
	
		
		sum_of_odd=sum_of_odd + i;
	}
		printf("\n sum of odd = %d",sum_of_odd);
	
		printf("\n sum of even = %d",sum_of_even);

}
