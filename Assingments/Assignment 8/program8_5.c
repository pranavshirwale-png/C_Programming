#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Table
    Description   : Displays the multiplication table of the given number in descending order.
    Input         : Integer number (int)
    Output        : Multiplication table from 10 to 1
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

    for(iCnt = iDigit; iCnt >= 1; iCnt --)
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