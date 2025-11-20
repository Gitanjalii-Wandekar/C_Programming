#include<stdio.h>
int main()
{
    int i = 0, j = 0 , Ans = 0;

    printf("Enter first Number:\n");
    scanf("%d",&i);

    printf("Enter second Number:\n");
    scanf("%d",&j);


    Ans = i + j;        //Business Logic

    printf("Addition is:%d\n", Ans);

    return 0;
}