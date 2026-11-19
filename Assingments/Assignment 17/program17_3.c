#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Alternate_Character_Number_Pattern.c

    Description  : This program displays an alternate pattern of lowercase
                    alphabets and numeric characters in multiple rows and columns.

    Input        : Number of rows and columns.
    Output       : Displays alphabets in odd rows and numeric characters
                    in even rows.

    Author       : Pranav Vinod Shirwale
    Date         : 15/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            ch = 'a';
        }
        else
        {
            ch = '1';
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
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