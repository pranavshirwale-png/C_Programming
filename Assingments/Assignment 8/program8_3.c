#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Factorial
    Description   : Calculates the factorial of the given number.
    Input         : Integer number (int)
    Output        : Factorial of the number (int)
    Author        : Pranav Vinod Shirwale
    Date          : 01/11/2026
*/

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}
