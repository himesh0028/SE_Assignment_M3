//7.) Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	float a,b,c,d,e,f;
	
	printf("\n\n\t enter marks in subject-1 : ");
	scanf("%f",&a);
	printf("\n\n\t enter marks in subject-2 : ");
	scanf("%f",&b);
	printf("\n\n\t enter marks in subject-3 : ");
	scanf("%f",&c);
	printf("\n\n\t enter marks in subject-4 : ");
	scanf("%f",&d);
	printf("\n\n\t enter marks in subject-5 : ");
	scanf("%f",&e);
	
	if(a>33 && b>33 && c>33 && d>33 && e>33){
		printf ("\n\n\t pass");
	}else {
		printf("\n\n\t fail");
	}
}
