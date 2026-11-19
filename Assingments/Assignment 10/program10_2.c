#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CircleArea
    Description   : Calculates the area using the given width and height values.
    Input         : Width and height (float, float)
    Output        : Calculated area (double)
    Author        : Pranav Vinod Shirwales
    Date          : 02/11/2026
*/

double CircleArea(float fWidth,float fHeight)
{
    double Area = 0.0;
    

    Area = fWidth * fHeight;

    return Area;

}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Width : ");
    scanf("%f",&fValue1);

    printf("Enter the Height : ");
    scanf("%f",&fValue2);

    dRet = CircleArea(fValue1,fValue2);

    printf("Area of Trangel is : %f\n",dRet);

    return EXIT_SUCCESS;

}