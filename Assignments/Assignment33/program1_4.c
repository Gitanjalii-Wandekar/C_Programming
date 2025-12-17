/* Accept Character from user and check whether it is in small case or not
 
Input : g

Output : TRUE

Input : D

Output : False

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cValue ='\0';
    bool bRet = false;

    printf("Enter the character");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }
    return 0;
}

