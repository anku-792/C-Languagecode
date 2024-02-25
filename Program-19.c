// Accept input from user Marks and total marks and calculate the percentage

#include<stdio.h>

float CalculatePercentage(int Marks,int Total)
{
    float Percentage = 0.0f;

    if((Marks < 0) || (Total < 0 ))
    {
        printf("Invalid input \n");
        return Percentage;
    }
    
    if(Marks > Total)
    {
        printf("Invalid input \n");
        return Percentage;
    }

    Percentage = (((float)Marks / (float)Total) * 100);
    return Percentage;
}
int main()
{
    int iMarks = 0;
    int iTotal = 0;
    float iPercentage = 0.0f;

    printf("Enter a Marks : ",iMarks);
    scanf("%d",&iMarks);

    printf("Enter a Total Marks : ",iTotal);
    scanf("%d",&iTotal);

    iPercentage = CalculatePercentage(iMarks,iTotal);

    printf("Percentage is : %f",iPercentage);

    return 0;

}