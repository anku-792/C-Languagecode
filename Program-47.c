#include<stdio.h>
#include<stdbool.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    printf("Factors of %d are :\n",iNo);

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i)==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ",iValue);
    scanf("%d\n",&iValue);

    DisplayFactor(iValue);

    return 0;
}

// Time Complexity : O(N/2)