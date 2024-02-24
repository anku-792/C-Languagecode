// accept input  from user and calculate cube 

#include<stdio.h>

int CalculateCube(int iNo)
{
    int iCube = 0;

    iCube = iNo * iNo * iNo;
    return iCube; 

}
int main()
{
    int iValue = 0;
    int Cube = 0;

    printf("Enter a number: ",iValue);
    scanf("%d",&iValue);

    Cube = CalculateCube(iValue);

    printf("Cube is : %d",Cube);

    return 0;
}