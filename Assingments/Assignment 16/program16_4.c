#include <stdio.h>
#include <stdlib.h>

/*
    Program Name :	Display_Decreasing_Number_Rows
    Description  :	This program accepts the number of rows and columns
                    from the user and displays decreasing integer values
                    in each row.
    Input        :	Two integer values representing the number of rows
                    and columns.
    Output       :	Displays decreasing integer values in each row.
    Author       :	Pranav Vinod Shirwale
    Date         :	15/11/2026
*/
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
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