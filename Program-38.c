#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("Hello %d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
     
    printf("Enter number of times you wantto display Hello on screen : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}