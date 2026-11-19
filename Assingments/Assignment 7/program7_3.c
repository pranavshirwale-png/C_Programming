// Que :- Write a program that accepts number from user and prints it's number line.

#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Display
    Description   : Displays the numbers line of the input number.
    Input         : Number of repetitions (int)
    Output        : Numbers line of the input number
    Author        : Pranav Vinod Shirwale
    Date          : 19/11/2026
*/

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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
