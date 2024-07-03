//8. Write a program in C to count the total number of vowels or consonants in astring.
#include<stdio.h>
int main()
{
	int i , v=0, c=0 ;
	char str[20];
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",str);
	
	for(i=0;str[i]!=0;i++)
	{
		if(str[i] == 'a' || str[i]=='A')
		v++;
		else if(str[i] == 'e'|| str[i]=='E')
		v++;
		else if(str[i] == 'i'|| str[i]=='I')
		v++;
		else if(str[i] == 'o'|| str[i]=='O')
		v++;
		else if(str[i] == 'u'|| str[i]=='U')
		v++;
		else
		c++;
		
	}
	printf("\n\n\t Total number of Vowels : %d",v);
	printf("\n\n\t Total number of consonants : %d",c);
	
}
