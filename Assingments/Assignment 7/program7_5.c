// Que :- Write a program that accepts N number and print first 5 mutiple of N.

#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Display
    Description   : Displays the first 5 multiples of the input number.
    Input         : Number (int)
    Output        : First 5 multiples of the input number
    Author        : Pranav Vinod Shirwale
    Date          : 19/11/2026
*/

void Display(int iNo)
{
    int iDigit = 0;
    int iCnt = 5;
    for(iDigit = 1; iDigit <= iCnt; iDigit++)
    {
        printf("%d\t", iNo * iDigit);
    }
    printf("\n");
}

int main ()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
