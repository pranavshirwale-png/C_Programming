#include <stdio.h>
#include <stdlib.h>

/*
Program Name : Alternate_Even_Odd_Pattern.c
Description  : This program displays an alternate pattern of even and odd numbers
                in multiple rows and columns.

Input        : Number of rows and columns.
Output       : Displays even numbers in odd rows and odd numbers in even rows.

Author       : Pranav Vinod Shirwale
Date         : 15/11/2026

*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNum = 2;
        }
        else
        {
            iNum = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNum);
            iNum = iNum + 2;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}