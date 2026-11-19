/*
    Function Name : Pattern
    Description   : Displays numbers from 1 to N on screen.
    Input         : Integer (int)
    Output        : Numbers from 1 to N
    Author        : Pranav Vinod Shirwale
    Date          : 03/11/2026
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
