#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : SquerMeter
    Description   : Converts area from square feet to square meters.
    Input         : Area in square feet (float)
    Output        : Area in square meters (double)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

double SquerMeter(float fValue)
{
    double dAns = 0.0, dSquer = 0.0929;
    
    dAns = fValue * dSquer;

    return dAns;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in squer feet : ");
    scanf("%f",&fValue);

    dRet = SquerMeter(fValue);

    printf("Squerfeet in to Squermeter : %lf\n",dRet);

    return EXIT_SUCCESS;

}