// Accept N number from user and display Average of N numbers and addition of N numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum/(float)iSize);
}

int main()
{
    int iCount = 0;
    int *ptr=NULL;
    int iCnt = 0;
    float fRet=0.0f;
    printf("Enter no of elements that you want to enter");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount * sizeof(int));
    printf("Dynamically memory gets aloocated successfully..");

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element of no  %d",iCnt+1);
        scanf("%d\n",&ptr[iCnt]);
    }
    fRet = Average(ptr,iCount);
    printf("Average is : %f\n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}