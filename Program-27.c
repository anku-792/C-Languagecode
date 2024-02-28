#include<stdio.h>

float Average(int iNo1,int iNo2,int iNo3)
{
    float Ans = 0.0f;
    Ans = ((iNo1 + iNo2 + iNo3) /3);
    return Ans;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fRet = 0.0f;

    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue1);

    printf("Enter third number :");
    scanf("%d",&iValue1);

    fRet = Average(iValue1,iValue2,iValue3);

    printf("Average is : %f",fRet);

    return 0;
}