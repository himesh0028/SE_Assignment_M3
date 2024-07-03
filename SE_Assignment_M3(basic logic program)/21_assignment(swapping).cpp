/*.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,num1,num2;
    
    printf("\n\n\t WITH USING THIRD VARIABLE............................................");
    //enter the n1 value
    printf("\n\n\t Enter the value of n1:");
    scanf("\n\n\t %d",&n1);
    //enter the n2 value 
    printf("\n\n\t Enter the value of n2:");
    scanf("\n\n\t %d",&n2);
    printf("\n\n\t ---------------Before Swapping---------------------------");
    printf("\n\n\t n1=%d",n1);
    printf("\n\n\t n2=%d",n2);
    n3=n1;
    n1=n2;
    n2=n3;
    printf("\n\n\t ----------------After Swapping------------------------------");
    printf("\n\n\t n1=%d",n1);
    printf("\n\n\t n2=%d ",n2);


printf("\n\n\t WITHOUT USING THIRD VARIABLE..........................................");
    printf("\n\n\t Enter the value of num1:");
    scanf("\n\n\t %d",&num1);
    printf("\n\n\t Enter the value of num2:");
    scanf("\n\n\t %d",&num2);
    printf("\n\n\t------------------Before Swapping-----------------");
    printf("\n\n\t num1=%d",num1);
    printf("\n\n\t num2=%d",num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n\n\t -------------After Swapping------------------");
    printf("\n\n\t num1=%d",num1);
    printf("\n\n\t num2=%d",num2);
    
}
