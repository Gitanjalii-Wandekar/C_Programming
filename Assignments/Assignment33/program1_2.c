/* Accept Character from user and check whether it is capital or not
 
Input : F

Output : TRUE

Input : d

Output : False

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
        printf("It is Capital");
    }
    else
    {
        printf("It is not a Capital");
    }
    return 0;
}

