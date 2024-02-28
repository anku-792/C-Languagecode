#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int bRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = Minimum(iValue1, iValue2);

    printf("Smallest number is : %d\n",bRet);

    return 0;
}