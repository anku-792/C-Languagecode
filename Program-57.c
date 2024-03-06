#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        printf("-------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("Value of iNo is : %d\n",iNo);
    }
}
int main()
{
    int iValue =0;

    printf("Enter a number :",iValue);
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}