// Reversing Digit number

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int Rev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Rev =( Rev * 10) + iDigit;
    }
    return Rev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:",iValue);
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse no is :  %d\n",iRet);
    
    return 0;
}