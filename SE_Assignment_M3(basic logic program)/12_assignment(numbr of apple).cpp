//Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?
#include<stdio.h>
int main()
{
	int x,number_of_apple;
	
	printf("\n\n\t enter number of students : ");
	scanf("%d",&x);
	
	number_of_apple = x * 5;
	printf("\n\n\t number of apple required is %d",number_of_apple);
}
