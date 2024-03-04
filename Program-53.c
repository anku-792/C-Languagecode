#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    printf("Value of iNo is : %d\n",iNo);

    printf("-----------------------------\n");
    iDigit = iNo % 10;
    printf("Digit  is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n",iNo);

    printf("-----------------------------\n");
    iDigit = iNo % 10;
    printf("Digit  is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n",iNo);

    printf("-----------------------------\n");
    iDigit = iNo % 10;
    printf("Digit  is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n",iNo);

}
int main()
{
    int iValue =721;

    Display(iValue);

    return 0;

}