#include <stdio.h>
#include <stdlib.h>

/*
    Program Name :	Display_Increasing_Number_Pattern
    Description  :	This program accepts the number of rows and columns
                    from the user and displays sequential integer values
                    in increasing order.
    Input        :	Two integer values representing the number of rows
                    and columns.
    Output       :	Displays sequential integer values in increasing order.
    Author       :	Pranav Vinod Shirwale
    Date         :	15/11/2026
*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
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

    printf("Enter number of row and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}