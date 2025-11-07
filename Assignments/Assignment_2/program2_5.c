#include<stdio.h>
#include<stdbool.h>
int ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
            
    printf("Enter number:");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("The number is even", iValue);
    }
    else
    {
        printf("The number is odd", iValue);
    }
    

    return 0;
}