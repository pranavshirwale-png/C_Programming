/*
    Function Name : Pattern
    Description   : Displays numbers from N down to 1 with * pattern on screen.
    Input         : Integer (int)
    Output        : Pattern of numbers and *
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
        printf("%d \t * \t ", iCnt);
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
