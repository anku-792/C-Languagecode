// Accept N number from user and  display largest and Smallest number of N elements

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        printf("Maximum element is %d\n",iMax);
        printf("Minimum element is %d\n",iMin);

    }
    printf("Maximum element is %d\n",iMax);
    printf("Minimum element is %d\n",iMin);
    
}

int main()
{
    int iCount = 0;
    int *ptr=NULL;
    int iCnt = 0;
   
    printf("Enter no of elements that you want to enter \n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount * sizeof(int));
    printf("Dynamically memory gets aloocated successfully..\n");

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element of no  %d\n",iCnt+1);
        scanf("%d\n",&ptr[iCnt]);
    }
    MaxMin(ptr,iCount);
    
    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}