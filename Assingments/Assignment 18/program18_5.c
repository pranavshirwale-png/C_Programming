#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Number_Star_Boundary_Pattern.c

    Description  : This program is used to print a pattern in which
                   boundary positions contain column numbers and
                   inner positions contain '*' symbols.

    Input        : Number of rows and columns.

    Output       : Number and star boundary pattern.

    Author       : Pranav Vinod Shirwale

    Date         : 15/11/2026

*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t",j);
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

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}