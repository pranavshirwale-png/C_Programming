#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern
    Description   : It is used to print a pattern using asterisk (*),
                    dollar ($) and hash (#) symbols based on the
                    given number of rows and columns.
    Input         : Integer, Integer
    Output        : Prints a pattern using *, $ and # symbols.
    Author        : Arvind Madhav Baile
    Date          : 17/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == j || i == 1|| j == 1 || j == iCol || i == iRow)
            {
                printf("*\t");
            }
            else if(i > j)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}