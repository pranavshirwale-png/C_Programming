#include <stdio.h>
#include <stdlib.h>

/*
    Program Name : Alternate_Positive_Negative_Pattern.c

    Description  : This program displays positive numbers in odd rows
                    and negative numbers in even rows.

    Input        : Number of rows and columns.

    Output       : Displays an alternate positive and negative number pattern.

    Author       : vPranav Vinod Shirwale
    
    Date         : 15/11/2026

*/

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;
    
    for(i = 1; i <= iRow;i++)
    {
        if(i % 2 == 0)
        {
            iNum = -1;
        }
        else
        {
            iNum = 1;
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNum);
            
            if(i % 2 == 0)
            {
                iNum --;
            }
            else
            {
                iNum ++;
            }
        }
        printf("\n\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Column\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}