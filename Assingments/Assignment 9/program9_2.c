#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : DollarToINR
    Description   : Converts the given dollar amount into Indian Rupees at the rate used in the program.
    Input         : Dollar amount (int)
    Output        : Equivalent amount in Indian Rupees (int)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

int DollarToINR(int iNo)
{
    int iDollar = 70;

    iDollar = iNo * iDollar;

    return iDollar;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n $");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

