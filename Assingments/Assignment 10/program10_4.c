#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : FhToCs
    Description   : Converts temperature from Fahrenheit to Celsius.
    Input         : Temperature in Fahrenheit (float)
    Output        : Temperature in Celsius (double)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

double FhToCs(float fTemp)
{
    double dAns = 0.0;
    
    dAns = (fTemp - 32) * (5.0 / 9.0);

    return dAns;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Tempreture in Celsius is : %f\n",dRet);

    return EXIT_SUCCESS;

}