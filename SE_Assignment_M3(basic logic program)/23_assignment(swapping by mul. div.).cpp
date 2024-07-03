//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\n\n\t Enter the value of num1:");
    scanf("\n\n\t %d",&num1);
    printf("\n\n\t Enter the value of num2:");
    scanf("\n\n\t %d",&num2);
    printf("\n\n\t ------------Before Swpping--------------------");
    printf("\n\n\t num1=%d",num1);
    printf("\n\n\t num2=%d",num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("\n\n\t -----------------After Swapping------------------------");
    printf("\n\n\t num1=%d",num1);
    printf("\n\n\t num2=%d",num2);
   
}
