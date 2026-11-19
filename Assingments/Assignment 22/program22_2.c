#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern

    Description : This function accepts an integer and prints
                  numbers in descending order from iNo to 1.
                  A for loop is used to decrement the counter
                  (iCnt--) until it reaches 1.
                  The '#' symbol is printed after each number.

    Input : Integer (iNo)

    Output : Displays numbers in descending order from iNo to 1,
             separated by the '#' symbol.

    Author : Pranav Vinod Shirwale

    Date : 18/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d \t # \t",iCnt);
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