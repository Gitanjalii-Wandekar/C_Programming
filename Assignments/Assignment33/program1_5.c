/*Accept division of student from user and deoends on the division display exam timing. There are 4 divisoin in the school as A, B,C,D. Exam of division A at 7AM, B at 8.30AM, C at 9.20AM and D at 10.30AM
 
Input : C

Output : Your exam at 9.20AM

Input : d

Output : Your exam at 10.30AM


*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid division");
    }
}


int main()
{
    char cValue ='\0';
    

    printf("Enter the character");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
 
    return 0;
}

