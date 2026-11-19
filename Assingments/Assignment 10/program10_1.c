#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CircleArea
    Description   : Calculates the area of a circle using the given radius.
    Input         : Radius (float)
    Output        : Area of the circle (double)
    Author        : Pranav Vinod Shirwale
    Date          : 02/11/2026
*/

double CircleArea(float fRadius)
{
    double Area = 0.0;
    float PI = 3.14f;

    Area = PI * fRadius * fRadius;

    return Area;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Circle Area is : %f\n",dRet);

    return EXIT_SUCCESS;

}