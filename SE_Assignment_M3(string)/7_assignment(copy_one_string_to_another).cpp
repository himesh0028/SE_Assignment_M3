//7. Write a program in C to copy one string to another string
#include<stdio.h>
#include<string.h>
main()
{
	char str1[30],str2[30];
	
	printf("\n\n\t enter a string : ");
	scanf("%s",&str1);
	strcpy(str2,str1);
	printf("\n\n\t After copying string into str2 : %s",str2); 
}
