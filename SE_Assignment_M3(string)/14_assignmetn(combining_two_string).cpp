/*14.Write a program in C to combine two
strings manually*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	
	printf("\n\n\t enter string 1 : ");
	gets(str1);
	
	printf("\n\n\t enter string 2 : ");
	gets(str2);
	
	printf("\n\n\t after combining two string : %s",strcat(str1,str2));
}
