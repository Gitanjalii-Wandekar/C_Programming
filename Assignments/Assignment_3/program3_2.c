/* Input : 24
    Output : 1   2   4   6   8   12  
*/

#include<stdio.h>
void DisplayFactorial(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    printf("Factorial of %d are :\n", iNo);

    for(int i = 1 ;i <= iNo ;i++)
        {
            if(iNo % i ==0)
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

    DisplayFactorial(iValue);

    return 0;
}