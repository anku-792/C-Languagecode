#include<stdio.h>

int CountDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum =iSum + iDigit;
        iNo = iNo / 10;
        
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