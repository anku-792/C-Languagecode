// Accept radius fron user and Calculate the area of circle

#include<stdio.h>

float CalculateAreaOfCircle(float iNo)
{
    float PI = 3.14;
    float Area = 0.0f;

    Area = PI * iNo * iNo;
    return Area;
}

int main()
{
    float iValue = 0.0f;
    float fArea = 0.0f;

    printf("Enter a radius :",iValue);
    scanf("%f",&iValue);

    fArea = CalculateAreaOfCircle(iValue);

    printf("Area of Circle is %f",fArea);
    
    return 0;
}