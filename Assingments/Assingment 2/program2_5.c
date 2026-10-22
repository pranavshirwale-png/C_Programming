// Q. Accept one number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("The number is even");
    }
    else 
    {
        printf("The number is odd");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    // Display Result

    return EXIT_SUCCESS;
}