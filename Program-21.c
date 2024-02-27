#include<stdio.h>

void Display(float fMarks)
{
    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are Fail...\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class\n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second class\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First class\n");
    }
    else if((fMarks >= 75.00) && (fMarks < 100.00))
    {
        printf("Your class is First with distinction");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter a Marks : ",fValue);
    scanf("%f",&fValue);

    Display(fValue);
    return 0;
}