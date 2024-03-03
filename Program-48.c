#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
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
   return iSum;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter a number : ",iValue);
    scanf("%d\n",&iValue);

    bRet = SumFactor(iValue);
    printf("Sum of Factors are %d\n",bRet);

    return 0;
}

