// Que :- Write a program that accepts number from user and prints all odd numbers upto n.

#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Display
    Description   : Displays all odd numbers from 1 to the input number.
    Input         : Number of repetitions (int)
    Output        : All odd numbers from 1 to the input number
    Author        : Pranav Vinod Shirwale
    Date          : 19/11/2026
*/

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
        printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main ()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OdddDisplay(iValue);

    return EXIT_SUCCESS;
}
