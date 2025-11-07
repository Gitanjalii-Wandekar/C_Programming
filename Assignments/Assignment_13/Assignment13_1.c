//print all numbers from 1 to N

#include<stdio.h>
void print_numbers(int limit)
{
    for(int i=1 ; i<=limit; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number:");
    scanf("%d", &limit);
    
    print_numbers(limit);
    return 0;
}