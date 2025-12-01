/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
    
*/ 

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
   int i = 0, j= 0;
   char ch = '\0';
   char ch1 = '\0';

   for(i = 1 ; i<= iRow ; i++)
   {
    for(j = 1, ch = 'a' , ch1 = 'A', ch1; j <= iCol ; j++, ch++, ch1++)
    {
       if((i % 2) == 0)
       {
        printf("%c\t", ch);
       }
       else
       {
        printf("%c\t",ch1);
       }
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