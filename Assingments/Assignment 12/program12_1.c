/*
    Function Name : DisplayDigit
    Description   : Displays digits of a number in reverse order.
    Input         : Integer (int)
    Output        : Digits printed line by line
    Author        : Pranav Vinod Shirwale
    Date          : 03/11/2026
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
