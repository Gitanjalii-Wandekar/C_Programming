//Sum of all factors of a number

#include<stdio.h>
int sum_of_factors(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count = count + i;
        }
    }
    return count;

}
int main(void)
{
    int number;
    printf("Enter number:");
    scanf("%d", &number);

    printf("%d\n", sum_of_factors(number));

    return 0;
}