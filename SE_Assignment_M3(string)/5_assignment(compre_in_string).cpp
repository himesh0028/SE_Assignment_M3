//5. Write a program in C to compare two strings without using string libraryfunctions.
#include<stdio.h>
#include<string.h>
main()
{
	
	char str1[30],str2[30];
	
	
	printf("\n\n\t Enter string1  : ");
	scanf("%s",&str1);
	printf("\n\n\t Enter string2  : ");
	scanf("%s",&str2);
	
	if(stricmp(str1,str2)==0)
		printf("\n\n\t Strings are equal...");
	else
		printf("\n\n\t Strings are not equal...");
}
