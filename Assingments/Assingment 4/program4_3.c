//Find the Greater of two numbers

//Input:10 20  ->20 is Greater
//Input:50 30  ->50 is Greater

//Input:15 15  ->Both the Numbers are eqal

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iFirst == iSecond)
    {
        printf("Both numbers are Equal\n");
    }
    else
    {
        printf("%d is Greater\n", iSecond);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}