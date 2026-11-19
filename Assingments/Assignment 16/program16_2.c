#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Display_Alternating_Alphabetic_Rows
    Description  : This program accepts the number of rows and columns
                    from the user and displays an alphabetic pattern.
                    Odd rows contain uppercase letters, while even
                    rows contain lowercase letters.
    Input        : Two integer values representing the number of rows
    and columns.
    Output       : Displays alternating uppercase and lowercase
                    alphabetic rows.
    Author       : Pranav Vinod Shirwale
    Date         : 15/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
        for(j = 1; j <= iCol; j++, ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and columns\n");
    scanf("%d\t %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}