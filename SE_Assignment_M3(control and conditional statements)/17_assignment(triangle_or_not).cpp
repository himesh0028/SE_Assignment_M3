/*17.Write a C program to check whether a triangle can be formed
with the givenvalues for the angles.*/
#include<stdio.h>
main()
{
	int a,b,c,T;
	
	printf("\n\n\t enter measure of angle A : ");
	scanf("%d",&a);
	printf("\n\n\t enter measure of angle B : ");
	scanf("%d",&b);
	printf("\n\n\t enter measure of angle C : ");
	scanf("%d",&c);
	
	printf("\n\n\t measure of angle A : %d degree",a);
	printf("\n\n\t measure of angle B : %d degree",b);
	printf("\n\n\t measure of angle C : %d degree",c);
	
	T=a+b+c;
	
	if(T==180){
		printf("\n\n\t ABC is triangle");
	}else {
		printf("\n\n\t ABC is not a triangle");
	}
	
}
