//ii. Vowel or Consonant using switch case
#include<stdio.h>
main()
{

	char C;
	printf("\n\n\t enter the character : ");
	scanf("%c",&C);
	printf("\n\n\t ----------------------------------------------------");
	
	switch(C)
	{
		case 'a' :	printf("\n\n\t the character is a vowel");
					break;
		case 'e' :	printf("\n\n\t the character is a vowel");
					break;
		case 'i' :	printf("\n\n\t the character is a vowel");
					break;
		case 'o' :	printf("\n\n\t the character is a vowel");
					break;
		case 'u' :	printf("\n\n\t the character is a vowel");
					break;
		case 'A' :	printf("\n\n\t the character is a vowel");
					break;
		case 'E' :	printf("\n\n\t the character is a vowel");
					break;
		case 'I' :	printf("\n\n\t the character is a vowel");
					break;
		case 'O' :	printf("\n\n\t the character is a vowel");
					break;
		case 'U' :  printf("\n\n\t the character is a vowel");
					break;
					
		default  : 	printf("\n\n\t you had entered a consonant");
					break;
	}
}
