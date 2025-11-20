/*
            Algorithm
    
    START
        Accept number and store as no
        Divide no by 2
        If the reminder is 0 
             then display as Even
        Otherwise
            display as ODD
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo1)
{   
    int iRem = 0;
    iRem = iNo1 % 2;
    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }

}
int main()
{

    int iValue=0;       
    printf("Enter Number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return 0;
}