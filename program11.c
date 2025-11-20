

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it into positive
        Perform addition of no1 & no2
        Display the addition on the screen
    STOP

*/

////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////
//      
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Gitanjali Shivaji Wandekar
//  Date :          09/10/2025
//
//////////////////////////////////////////////////


float AdditionTwoNumbers(
                            float fNo1,                         //Fist input
                            float fNo2                          //Seconf input
                        )
{
    float fSum = 0.0f;                                          //To store the result

    
    if(fNo1 < 0.0f)                                             //Updatpr
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                             //Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                         //Business Logic
    
    return fSum; 
}   //End of AdditionTwoNumbers 

//////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////

int main()                                                      
{
    float fValue1 = 0.0f, fValue2= 0.0f;                        //To accpet user input
    float fRet = 0.0f;                                          //To store the result

    printf("Enter first Number:\n");
    scanf("%f",&fValue1);

     printf("Enter second Number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);                 //Method call

    printf("Addition is:%f\n", fRet);

    return 0;
}   //End of main

//////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 13.7 
// 
//////////////////////////////////////////////////