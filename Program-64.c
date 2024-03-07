// Accept no from user and check whether no is palindrom or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int Rev = 0;
    int iCopy = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Rev =( Rev * 10) + iDigit;
    }
   return(Rev==iCopy) ;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:",iValue);
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet==true)
    {
        printf("%d is Palindrome number",iValue);
    }
    else
    {
        printf("%d is not a Pallindrome number",iValue);
    }

    
    return 0;
}