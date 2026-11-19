#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern
    Description   : It is used to print a rectangular pattern
                    using asterisk (*) symbols based on the
                    given number of rows and columns.
    Input         : Integer, Integer
    Output        : Prints a rectangular pattern using * symbols.
    Author        : Arvind Madhav Baile
    Date          : 17/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}