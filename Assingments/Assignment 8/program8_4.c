#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Table
    Description   : Displays the multiplication table of the given number in ascending order.
    Input         : Integer number (int)
    Output        : Multiplication table from 1 to 10
    Author        : Pranav Vinod Shirwale
    Date          : 01/11/2026
*/

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iDigit = 10;

    for(iCnt = 1; iCnt <= iDigit; iCnt ++)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}