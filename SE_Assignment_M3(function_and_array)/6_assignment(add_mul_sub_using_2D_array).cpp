//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main()
{
    int a[3][3];
     int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\n\t input array element [%d][%d]: ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    printf("\n------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\n\t input array element [%d][%d]: ",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    printf("\n-----------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]+a[r][c]);
            
        }
        printf("\n");
    }
    printf("\n--------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]-a[r][c]);
            
        }
        printf("\n");
    }
    printf("\n---------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]);
            
        }
        printf("\n");
    }
     printf("\n--------------------------------------------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d",a[r][c]*a[r][c]);
            
        }
        printf("\n");
    }

}

