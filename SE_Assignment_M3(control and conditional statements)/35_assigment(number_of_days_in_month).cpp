/**
 35. Accept the input month number and print number of
days in thatmonth.
 */

#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("\n\n\t Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 2)
    {
        printf("\n\n\t 28 or 29 days");
    }
    else if(month == 3)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 4)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 5)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 6)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 7)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 8)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 9)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 10)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 11)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 12)
    {
        printf("\n\n\t 31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}
