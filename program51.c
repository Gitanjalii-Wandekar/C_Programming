#include<stdio.h>

void DisplayFactorial(int iNo)
{
    int iCnt = 0, int iFrequency = 0;
    {
        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                iFrequency++
            }
        }
        return iFrequency;
    }
}
int main()
{
    int iValue1 = 0 , iRet = 0;

    printf("Enter the number:");
    scanf("%d", iRet);

    iRet = DisplayFactorial(iValue1);

    printf("Number of factors are : %d\n",iRet);

    return 0;
}