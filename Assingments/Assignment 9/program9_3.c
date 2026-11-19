#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : EvenFactorial
    Description   : Calculates the product of all even numbers from the given number down to 2.
    Input         : Integer number (int)
    Output        : Even factorial (int)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)