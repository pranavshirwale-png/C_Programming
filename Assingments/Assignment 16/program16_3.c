#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Display_Sequential_Alphabetic_Rows
    Description  : This program accepts the number of rows and columns
                    from the user and displays sequential uppercase
                    alphabetic characters in each row.
    Input        : Two integer values representing the number of rows
                    and columns.
    Output       : Displays sequential uppercase alphabetic characters
                    in each row.
    Author       : Pranav Vinod Shirwale
    Date         : 15/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}