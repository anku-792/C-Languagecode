#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
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