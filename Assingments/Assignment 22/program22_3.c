#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern

    Description : This function accepts an integer and prints
                  numbers in ascending order from 1 to iNo.
                  A for loop is used to increment the counter
                  (iCnt++) until it reaches iNo.
                  The '*' symbol is printed after each number.

    Input : Integer (iNo)

    Output : Displays numbers in ascending order from 1 to iNo,
             separated by the '*' symbol.

    Author : Pranav Vinod Shirwale

    Date : 18/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter The Frequency : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}