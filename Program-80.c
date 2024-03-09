// Accept the N numbers from user and return the largest element from that N element

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    return iMax;
}

int main()
{
    int iCount = 0;
    int *ptr=NULL;
    int iCnt = 0;
    int iRet = 0;
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
    iRet=Maximum(ptr,iCount);
    printf("Maximun element is : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}