#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern

    Description : This function accepts an integer and prints
                  numbers in ascending order from 1 to iNo.
                  A for loop is used to increment the counter
                  (iCnt++) until it reaches iNo.
                  The '#' symbol is printed before each number
                  and the '*' symbol is printed after each number.

    Input : Integer (iNo)

    Output : Displays '#' followed by a number and '*'
             for each iteration from 1 to iNo.

    Author : Pranav Vinod Shirwale

    Date : 18/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t %d \t * \t",iCnt);
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