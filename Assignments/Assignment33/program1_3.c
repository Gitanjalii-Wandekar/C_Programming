/* Accept Character from user and check whether it is digit or not
 
Input : 7

Output : TRUE

Input : d

Output : False

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}

