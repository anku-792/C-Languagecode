#include<stdio.h>

int Maximum(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
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

    printf("Enter First number :",iValue1);
    scanf("%d",&iValue1);

    printf("Enter Second number :",iValue2);
    scanf("%d",&iValue2);

    bRet = Maximum(iValue1,iValue2);

    printf("Largest number is %d",bRet);

    return 0;

}