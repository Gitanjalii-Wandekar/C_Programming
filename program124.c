#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)  
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)   
    {
        printf("%d\n",Arr[iCnt]);
       
    }
}

int main()
{
    
    int iLength = 0 , iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int)); 
    if(ptr == NULL)                                     //if the ptr points to null that is if memory does not get allocated to ptr
    {
        printf("unable to allocate memory");
        return -1;
    }
    

    printf("Enter the elements: \n");
    
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr); //memory gets free but prt contains the value

    return 0;
}