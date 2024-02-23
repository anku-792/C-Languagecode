// Accept one number from user and check whether is divisible by 5 or not

#include<stdio.h>
typedef int Bool;
#define TRUE 1; 
#define FALSE 0;

Bool Check(int iNo)
{
    if((iNo % 5==0))
    {
        return TRUE;
    } 
    else
    {
        return FALSE ;
    }

}
int main()
{
     int iValue = 0;
     
     Bool bRet = TRUE;

     printf("Enter Number:",iValue);
     scanf("%d",&iValue);

     if(Check(iValue))
     {
        printf("Divisible by 5");
     }
     else
     {
        printf("Not divisible by 5");
     }
     return 0;
}
