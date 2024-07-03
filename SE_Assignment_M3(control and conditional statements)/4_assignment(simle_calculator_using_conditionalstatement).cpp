/*4.)WAP to make simple calculator (operation include
Addition, Subtraction,Multiplication, Division, modulo)
using conditional statement
*/
#include<stdio.h>
main()
{
	int n1,n2,c;
	printf("\n\n\t enter number 1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t enter number 2 : ");
	scanf("%d",&n2);
	
	printf("\n----------choose any option----------------\n");
	
	printf("\n\n\t for addition press 1");
	printf("\n\n\t for subtraction press 2");
	printf("\n\n\t for multiplication press 3");
	printf("\n\n\t for division press 4");
	printf("\n\n\t for modulo press 5");
	printf("\n\n\t for exit press 6");
	
	printf("\n\n\t enter the number : ");
	scanf("%d",&c);
	
	if(c==1){
		printf("\n\n\t addition = %d",n1+n2);
	}else if(c==2){
		printf("\n\n\t subtraction = %d",n1-n2);
	}else if(c==3){
		printf("\n\n\t multiplication = %d",n1*n2);
	}else if(c==4){
		printf("\n\n\t division = %d",n1/n2);
	}else if(c==5){
		printf("\n\n\t modulo = %d",n1%n2);
	}else{
		printf("\n\n\t wrong choice............................................");
	}

}

