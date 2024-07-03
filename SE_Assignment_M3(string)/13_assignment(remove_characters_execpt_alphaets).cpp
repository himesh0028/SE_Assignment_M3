/*13.Write a program in C to remove characters from a string
except alphabets.*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int i,j;
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;)
	{
		if(!(str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			for(j=i;str[j]!=0;j++)
			{
				str[j]=str[j+1];
			}
		}
		else
		{
			i++;
		}
		
		
	}
	printf("\n\n\t String after removing non-alphabetic characters: %s", str);
}
