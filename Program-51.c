// Accept number from user and check whether given number is Prime or Not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            return false;
        }
        
    }
    return true;

}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number : \n",iValue);
    scanf("%d\n",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is a Prime number",iValue);
    }
    else
    {
        printf("%d is Not a Prime number\n",iValue);
    }

    return 0;
}
     

