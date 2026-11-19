// Que :- Write a program that accepts number from user and print that number of $ and * on screen.

#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Pattern
    Description   : Displays a repeated dollar and asterisk pattern.
    Input         : Number of repetitions (int)
    Output        : Dollar and asterisk pattern
    Author        : Pranav Vinod Shirwale
    Date          : 10/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main ()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
