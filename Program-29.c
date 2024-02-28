#include<stdio.h>

void Display(int No)
{
    int i = 0;
    for(i=0; i<No; i++)
    {
        printf("Jay Ganesh....\n");
    }
}
int main()
{
    int Value = 0;

    printf("Enter Number : ",Value);
    scanf("%d",&Value);

    Display(Value);
    return 0;
}