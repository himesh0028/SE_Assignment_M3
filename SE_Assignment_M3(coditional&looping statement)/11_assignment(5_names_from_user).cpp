//11.Accept 5 names from user at run time.
#include<stdio.h>
main()
{
	char name[30],i;
	int j;
	
	for(j=1;j<=5;j++){
		printf("\n\n\t enter name [%d] : ",j);
		gets(name);
		puts(name);
	}
	
		for(j=1;j<=5;j++){
		printf("\n\n\t  name [%d] : %s",j,name);
	}
}
