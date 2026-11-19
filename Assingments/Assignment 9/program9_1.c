#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Displays a sequence of asterisks followed by hash symbols.
    Input         : Number of repetitions (int)
    Output        : Asterisks and hash symbols
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}