// Accept N numbers from user and display even numbers from the N numbers

#include<stdio.h>
#include<stdlib.h>

//void Display(int *Arr, int iSize)
void EvenDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("\nEven  elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0, iCnt = 0;
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

    EvenDisplay(ptr, iCount);

    free(ptr);  // At the end of program deallocate the memory using free()
    
    return 0;
}