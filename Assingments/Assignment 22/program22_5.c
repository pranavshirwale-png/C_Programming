#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern

    Description : This function accepts an integer and prints
                  the first iNo even numbers starting from 2.
                  A for loop is used to increment the counter
                  (iCnt++) until it reaches iNo.
                  The multiplication operator (*) is used to
                  generate even numbers by multiplying each
                  counter value by 2.

    Input : Integer (iNo)

    Output : Displays the first iNo even numbers starting from 2.

    Author : Pranav Vinod Shirwale

    Date : 18/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
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