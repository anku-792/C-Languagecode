#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int i = 0;
    int iSum =0;

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i)==0)
        {
            iSum = iSum + i;
        }
    }

        if(iSum==iNo)
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
    bool bRet = false;

    printf("Enter a number\n",iValue);
    scanf("%d\n",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("%d is a Perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }
    
    return 0;
}

