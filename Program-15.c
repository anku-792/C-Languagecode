// accept input  from user and calculate cube 

#include<stdio.h>

long int CalculateCube(int iNo)
{
    long int iCube = 0;

    iCube = iNo * iNo * iNo;
    return iCube; 

}
int main()
{
    int iValue = 0;
    long int Cube = 0;

    printf("Enter a number: ",iValue);
    scanf("%d",&iValue);

    Cube = CalculateCube(iValue);

    printf("Cube is : %ld",Cube);

    return 0;
}
