#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern

    Description : This function accepts an integer and prints
                  the first iNo uppercase English alphabets
                  starting from 'A' using a for loop.
                  The character increment operator (ch++)
                  moves to the next alphabet after each iteration.

    Input : Integer (iNo)

    Output : Displays uppercase English alphabets starting from 'A'.

    Author : Pranav Vinod Shirwale

    Date : 18/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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