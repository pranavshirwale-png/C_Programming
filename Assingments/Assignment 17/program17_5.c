#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Incremental_Row_Number_Pattern.c

    Description  : This program displays an incremental number pattern.
                    Each row starts with its row number and increments
                    the number by one in every column.

    Input        : Number of rows and columns.

    Output       : Displays an incremental number pattern.

    Author       : Pranav Vinod Shirwale
    Date         : 15/11/2026

*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        iNum = i;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNum);
            iNum++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}