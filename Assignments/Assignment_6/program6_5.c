#include<stdio.h>
float Percentage(int TotalMarks, int ObtainedMarks)
{
    float fResult;
    
    if(TotalMarks == 0)
    {
        return 0;
    }
    fResult = ((float)ObtainedMarks / TotalMarks) * 100;
    return fResult;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet =0.0;

    printf("Please enter total marks:");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks:");
    scanf("%d", &iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}