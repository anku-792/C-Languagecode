//  Accept number from user Divide that number by 2 If remainder is 0 then display Even otherwise display Odd

#include<stdio.h>
#include<stdbool.h>
 
 int CheckEven(int iNo)
 {
    if((iNo % 2==0))
    {
        return true;
    }
    else
    {
        return false;
    }
 }
 int main()
 {
    int iValue = 0;
    bool bRet =0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if((bRet==true))
    {
        printf("%d is an Even number",iValue);
    }
    else
    {
        printf("%d is an Odd number",iValue);
    }
    return 0;
 }