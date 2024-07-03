//6.) Find the Character Is Vowel or Not
#include<stdio.h>
main()
{
	char c;
	
	printf("\n\n\t enter thre character : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a' : 		   
		case 'e' : 		   
		case 'i' : 		   
		case 'o' : 		   
		case 'u' : 
		case 'A' : 		   
		case 'E' : 
		case 'I' : 		   
		case 'O' : 		   
		case 'U' : printf("\n\n\t enterd character is Vowel.");
				   break;
				   
		default : 
				printf("\n\n\t  entered character is not vowel or it is consonant ");
				break;
	}
}
