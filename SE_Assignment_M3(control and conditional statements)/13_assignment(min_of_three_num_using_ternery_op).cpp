//13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int n1,n2,n3,n4;
	
	printf("\n\n\t Input n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input n2 : ");
	scanf("%d",&n2);
	printf("\n\n\t Input n3 : ");
	scanf("%d",&n3);
	
	n4=(n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
	printf("\n\n\t %d is min. ",n4);
}
