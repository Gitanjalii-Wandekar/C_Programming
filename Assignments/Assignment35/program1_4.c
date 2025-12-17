//Write a program which accept string from user and check whether it contains vowels.


#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' ||*str >= 'e' || *str >= 'i' || *str >= 'o' || *str >= 'u' 
            ||*str >= 'A' ||*str >= 'E' || *str >= 'I' || *str >= 'O' || *str >= 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("contains vowels");
    }
    else
    {
        printf("Does not contain vowels");
    }

    return 0;
}