// Division of two numbers

#include<stdio.h>

int Division(int iNo1, int iNo2)
{
    int Result = 0;
    Result = iNo1 / iNo2;
}

int main()
{
     int iValue1 = 0;
     int iValue2 = 0;
     int bRet = 0;

     printf("Enter a first number :",iValue1);
     scanf("%d",&iValue1);

     printf("Enter a second number :",iValue2);
     scanf("%d",&iValue2);

     bRet = Division(iValue1,iValue2);

     printf("Division is : %d", bRet);

     return 0;

}