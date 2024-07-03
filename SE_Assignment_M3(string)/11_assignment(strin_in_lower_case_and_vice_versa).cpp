/*11.Write a program in C to read a sentence and replace
lowercase characters withuppercase and vice versa.*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[30],str2[30];
	
	printf("\n\n\t printing lowecase to upper case::::::::::::::::::::::::::::::::::::::");
	printf("\n\n\t enter a strong in loer case : ");
	gets(str1);
	
	printf("\n\n\t string in upper case : %s ",strupr(str1));
	
	printf("\n\n\t printing uppercase to lower case::::::::::::::::::::::::::::::::::::::");
	
	printf("\n\n\t enter string in upper case : ");
	gets(str2);
	printf("\n\n\t string in lower case : %s",strlwr(str2));
}
