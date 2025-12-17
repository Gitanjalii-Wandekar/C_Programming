//Find sum of first N even number

#include<stdio.h>

void print_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2)==0)
        {
        iSum = iSum + iCnt;
        }
    }
    printf("sum is:%d\n",iSum);
}
int main()
{
    int limit;

    printf("Enter number:");

    scanf("%d", &limit);
    print_numbers(limit);
    return 0;
}