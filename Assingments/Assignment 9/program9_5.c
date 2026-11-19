#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : FactorialDiff
    Description   : Calculates the difference between the even-number product and odd-number product up to the given number.
    Input         : Integer number (int)
    Output        : Difference of even and odd factorials (int)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

int FactorialDiff(int iNo)
{
    int iCnt = 0, iOddFact = 1, iEvenFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {

            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference of Number : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

