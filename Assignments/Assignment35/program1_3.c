//Write a program which accept string from user and count number difference between small characters and big characters.


#include<stdio.h>

    int Difference(char *str)
    {
        int iSmall = 0;
        int iCapital = 0;
        while(*str!='\0')
        {
            if(*str>='a' && *str<='z')
            {
                iSmall++;
            }
            else if(*str>='A' && *str <='Z')
            {
                iCapital++;
            }
            else
            {
                str++;
            }
            return iSmall - iCapital;
        }
    }


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}