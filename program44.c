#include<stdio.h>
#include<stdbool.h>

bool CheckDivisiable(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
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
    int iValue1,iValue2;
    bool bRet = 0;

    printf("enter first number:");
    scanf("%d", &iValue1);

    printf("enter first number:");
    scanf("%d", &iValue1);

    bRet = CheckDivisiable(iValue1 , iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible\n");
    }    
    else
    {
        printf("It is not divisible\n");
    }

    return 0;

}