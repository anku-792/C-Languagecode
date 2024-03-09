// Accept the N number from user  and count number of Odd element and return of that count

#include<stdio.h>
#include<stdlib.h>

//void Display(int *Arr, int iSize)
int OddCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)!=0)
        {
           iOdd++;
        }
    }
    return iOdd;
}

int main()
{
    int iCount = 0, iCnt = 0,  iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated for %d element \n",iCount);

    printf("Enter the %d  values : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1); // Display of the element starts 1,2,3..... Userfriendly.
        scanf("%d",&ptr[iCnt]);
    }
    printf("Dynamic memory gets deallocated succesfully...\n");

    iRet=OddCount(ptr, iCount);
    printf("Enter of Odd elements are :%d\n",iRet);

    free(ptr);  // At the end of program deallocate the memory using free()
    
    return 0;
}