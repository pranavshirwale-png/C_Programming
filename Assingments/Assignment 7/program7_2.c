// Que :- Write a program that accepts number from user and prints numbers till the input number.

#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Pattern
    Description   : Displays the numbers from 1 to the input number.
    Input         : Number of repetitions (int)
    Output        : Numbers from 1 to the input number
    Author        : Pranav Vinod Shirwale
    Date          : 19/11/2026
*/

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main ()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
