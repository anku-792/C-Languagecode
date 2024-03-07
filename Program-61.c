// Addition of Digits
#include<stdio.h>

int CountDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iSum =iSum + (iNo % 10);    // 0 +(1)
        iNo = iNo / 10;             // 72
        
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int bRet =0;

    printf("Enter a number :",iValue);
    scanf("%d",&iValue);

    bRet = CountDigits(iValue);

    printf("Number of Digits are : %d\n",bRet);

    return 0;

}