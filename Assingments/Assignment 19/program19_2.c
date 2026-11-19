#include <stdio.h>
#include <stdlib.h>


/*
    Function Name : Pattern
    Description   : It is used to print an upper right triangle
                    pattern using the given number of rows
                    and columns.
    Input         : Integer, Integer
    Output        : Prints an upper right triangle pattern.
    Author        : Pranav Vinod Shirwale
    Date          : 17/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j || j > i)
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

    printf(" Enter Number of Rows And Columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}