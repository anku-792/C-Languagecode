// Check number is Even or Odd

#include<stdio.h>

int EvenOdd(int iNo)
{
    if((iNo%2==0))
        printf(" This is a  Even Number");
    else
        printf("This is a Odd Number");
    
}
int main()
{
    int iValue=0;
    int iValue1=0;
    printf("Enter a number:",iValue);
    scanf("%d",&iValue);

    EvenOdd(iValue);
    return 0;
}