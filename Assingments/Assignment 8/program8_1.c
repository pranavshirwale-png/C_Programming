#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Number
    Description   : Displays whether the given number is Large, Medium, Small, or invalid.
    Input         : Integer number (int)
    Output        : Size category or Invalid Input
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/

void Number(int iNo)
{
    if(iNo >= 100)
    {
        printf("Large\n");
    }
    else if(iNo <= 100 && iNo >= 50)
    {
        printf("Medium\n");
    }
    else if(iNo <= 50 && iNo >= 0)
    {
        printf("Small\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
