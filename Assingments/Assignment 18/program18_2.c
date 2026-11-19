#include <stdio.h>
#include<stdlib.h>

/*
    Program Name : Reverse_Row_Hash_Star_Pattern.c

    Description  : This program displays a reverse row-wise pattern of
                    hash (#) and star (*) symbols based on the given
                    number of rows and columns.

    Input        : Number of rows and columns.

    Output       : Displays hash (#) when the column number is greater
                    than the current row number; otherwise, displays
                    star (*).

    Author       : Pranav Vinod Shirwale
    Date         : 15/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i < j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}