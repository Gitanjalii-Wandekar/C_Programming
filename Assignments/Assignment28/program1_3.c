/*
   A    A   A   A   A
   B    B   B   B   B
   C    C   C   C   C
*/ 

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
   int i = 0, j= 0;
   char ch = '\0';

   for(i = 1; i<= iRow ; i++)
   {
    ch = 'A';
    for(j = 1; j <= iCol ; j++)
    {
       printf("%c\t", ch);
        ch++;
    }
    printf("\n");
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of colums:");
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}