//8.)WAP to accept the height of a person in centimeters and categorize theperson according to their height.
#include<stdio.h>
main()
{
	float h;
	
	printf("\n\n\t enter height in centimeters : ");
	scanf("%f",&h);
	
	printf("\n\n\t height = %.2f cm",h);
	
	if(h>158){
		printf("\n\n\t the person is tall ");
	}else{
		printf("\n\n\t the person is short");
	}
}
