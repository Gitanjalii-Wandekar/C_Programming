/*  Input : 23  35
    Output :23  24  24  26  27  28  29  30  31  32  33  34  35 
    
    Input :10   18
    Output : 10 11  12  13  14  15  16  17  18  
    
    Input : -10    2
    Output : -10  -9    -8  -7  -6  -5  -4  -3  -2  -1  0   1   2

    Input : 90  18
    Output :  Invalid Range

*/ 
#include<stdio.h>
void RangeDisplay(int iNo1, int iNo2)
{
    if(iNo2 < iNo1)
    {
        printf("Invalid Range");
    }

    for(int i = iNo1 ; i <= iNo2; i++)
    {
        printf("%d\t", i);
    }

    printf("\n");
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter starting point");
    scanf("%d", &iValue1);

    printf("enter ending point");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1 , iValue2);

    return 0;

}