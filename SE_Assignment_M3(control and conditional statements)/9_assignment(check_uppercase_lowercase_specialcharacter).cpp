//9.) C Program to Check Uppercase or Lowercase or Digit or SpecialCharacter
#include<stdio.h>
main()
{
	char s;
	
	printf("\n\n\t enter the letter : ");
	scanf("%c",&s);
	
	
	if(s >= 65 && s <= 90){
		printf("\n\n\t upper case letter");
	}else if(s >= 97 && s <= 122){
		printf("\n\n\t lower case letter");
	}else if(32<=s<=47 && 58<=s<=64 && 91<=s<=96 && 123<=s<=126){
		printf("\n\n\t special charcter");
	}else{
		  printf("\n\n\t byee byee");
	}
}
