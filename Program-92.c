// Input : 4
// Output : a   b   c   d

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch ='a';
    //      1         2          3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);  // 4
        ch++;
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