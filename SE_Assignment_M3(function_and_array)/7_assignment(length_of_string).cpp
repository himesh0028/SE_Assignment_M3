//7. length of string withour=t usig inbuilt function.
#include<stdio.h>
#include<string.h>
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
