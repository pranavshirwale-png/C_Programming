#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : KMtoMeter
    Description   : Converts the given distance from kilometers to meters.
    Input         : Distance in kilometers (int)
    Output        : Distance in meters (int)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

int KMtoMeter(int iNo)
{
    int iAns = 0, iMeter = 1000;

    iAns = iMeter * iNo;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meters : %d\n",iRet);

    return EXIT_SUCCESS;
}