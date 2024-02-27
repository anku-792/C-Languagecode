#include<stdio.h>

void DisplayExamTime( int iStandard)
{
    if(iStandard == 1)
    {
        printf("Your Exam is 8 AM\n");
    }
    else if(iStandard == 2)
    {
        printf("Your Exam is 9 AM\n");
    }
    else if(iStandard == 3)
    {
        printf("Your Exam is 10 AM\n");
    }
    else if(iStandard == 4)
    {
        printf("Your Exam is 11 AM\n");
    }
    else if(iStandard == 5)
    {
        printf("Your Exam is 12 AM\n");
    }
    else
    {
        printf("Invalid input...\n");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter your standard :",iValue);
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}