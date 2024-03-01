#include<stdio.h>

void Display(int iNo)
{
    int i= 0;
    for(i = iNo; i >= 1; i--)
    {
        printf("%d\n",i);

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display on screen \n");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}