//WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
    int y;
    printf("\n\n\t Enter the year:");
    scanf("\n\n\t %d",&y);
    if(y%4==0)
        printf("\n\n\t this year is leap year");
    else
        printf("\n\n\t this year is not leap year");
}
