/*
    Function Name : Multiply
    Description   : Accepts three numbers and returns their multiplication.
    Input         : Three integers (int, int, int)
    Output        : Product of numbers (int)
    Author        : Pranav Vinod Shirwale
    Date          : 04/11/2026
*/

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    int flag = 0;

    if(iNo1 != 0) { iAns = iAns * iNo1; flag = 1; }
    if(iNo2 != 0) { iAns = iAns * iNo2; flag = 1; }
    if(iNo3 != 0) { iAns = iAns * iNo3; flag = 1; }

    if(flag == 0)
    {
        return 0;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is %d", iRet);

    return 0;
}
