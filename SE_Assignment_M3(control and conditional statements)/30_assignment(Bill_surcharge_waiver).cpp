/*20. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/- */
#include<stdio.h>
int main()
{
    float B,sc,T; // sc is surcharge
    printf("\n\n\tEnter the Bill Amount : ");
    scanf("%f",&B);
    sc=B*0.18;//0.18 is 18% surcharge
    T=B+sc;//tatal bill after syrcharge adition
    printf("\n\n\t -------------------------------------------------");
    if(B>800)
    {
        printf("\n\n\t Your Bill Amount Highr then 800 so you have to pay extra charges");
        printf("\n\t You have to Pay this Extra on Your Bill Amount: %.2f",sc);
        
        printf("\n\n\t your total bill amount is : %.2f",T);
    }
    else if(B>=256 && B<800)
    {
        printf("\n\n\t You have to pay this Amount: %.2f",B);
    }
    else 
    {
        printf("\n\n\t Dear User your bill amount is %.2f",256);
    }
}
