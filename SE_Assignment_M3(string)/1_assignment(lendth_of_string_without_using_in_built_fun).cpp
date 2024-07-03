//1. Write a program in C to find the length of a string without using libraryfunctions.
#include<stdio.h>

main()
{
	char str[20], i;
	int len=0;
	
	printf("\n\n\t Enter string1  : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\n\t Length of the string : %d",len);
}
