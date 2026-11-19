/*
    Function Name : NonFact
    Description   : Displays all non-factors of a given number.
    Input         : Integer (int)
    Output        : Non-factors printed line by line / space-separated
    Author        : Pranav Vinod Shirwale
    Date          : 04/11/2026
*/

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
