/* Input : 36
    Output :  2  6  12  
*/

#include<stdio.h>
void DisplayEvenFactorial(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    printf("Even Factorial of %d are :\n", iNo);

    for(int i = 1 ;i <= iNo ;i++)
        {
            if(iNo % i == 0  && i % 2 == 0 )
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    DisplayEvenFactorial(iValue);

    return 0;
}