// Input : 4
// Output : a   b   c   d

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch ='\0';
    //      1         2          3
    for(iCnt = 1,ch = 'a'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);  // 4
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}