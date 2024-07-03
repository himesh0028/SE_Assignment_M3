//6. WAP to print Fibonacci series up to given numbers
#include<Stdio.h>
main()
{
	int N=0,i=0,a=0,b=1;;
	printf("\n\n\t enter the fibonacci d=series upto : ");
	scanf("%d",&N);
	
	printf("%d, %d, ", a, b);
	
	i = a + b;
	
	while(i<=N){
		printf("%d , ",i);
		a = b;
        b = i;
        i = a + b;
	}
}
