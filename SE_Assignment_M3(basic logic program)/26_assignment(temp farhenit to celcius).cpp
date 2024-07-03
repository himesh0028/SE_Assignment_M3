//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float a,t1,t2,celsius;
    printf("\n\n\t\t Enter the temperatur fahrenheit:");
    scanf("\n\n\t\t %f",&a);
    t1=a-32;
    t2=t1*5;
    celsius=t2/9;
    printf("\n\n\t\t fahrenheit :%.2f ",a);
    printf("\n\n\t\t fahrenheit to celsius:%.2f",celsius);
}
