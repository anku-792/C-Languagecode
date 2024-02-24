// Accept one number from user and print that number of  *  on screen

#include<stdio.h>

void Accept( int iNo)
{
     int i = 0;
     for(i=0; i<iNo; i++)
     {
        printf("*\t");
     }
}
int main()
{
    int iValue = 0;

    printf("Enter a number:",iValue);
    scanf("%d",&iValue);

    Accept(iValue);
    
    return 0;
}