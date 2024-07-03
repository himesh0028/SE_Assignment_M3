/*2. WAP of Addition, Subtraction, Multiplication and Division
using Switchcase.(Must Be Menu Driven)*/
#include<stdio.h>
int main()
{
    int n1,n2,exit;
    char choice;
    printf("\n\t Enter the  number 1 :");
    scanf("%d",&n1);
    printf("\n\t Enter the  number 2 :");
    scanf("%d",&n2);
    printf("\n\t ------------------------------------------");
    printf("\n\t ----------basic Arithmatic-----------");
    printf("\n\t +. Addition");
    printf("\n\t -. Subtraction");
    printf("\n\t *. Multiplication");
    printf("\n\t /. Division");
    printf("\n\t E. Exit");
    printf("\n\t ------------------------------------------");
    printf("\n\t choice a Arithmatic op:");
    scanf(" %c",&choice);
    printf("\n\t ------------------------------------------");
    switch(choice)
    {
        case '+' : printf("\n\t Addition : %d",n1+n2);
                break;
        case '-' : printf("\n\t Subtraction : %d",n1-n2);
                break;
        case '*' : printf("\n\t Multiplication : %d",n1*n2);
                break;
        case '/' : printf("\n\t Division : %d",n1/n2);
                break;
        default : printf("\n\t ----------------Invalid Choice----------------");
                break;
    }
    printf("\n\t ------------------------------------------");

}
