//Check a number is positive or negative

//Input:15  ->Positive Number
//Input:-8  ->Negative Number
//Input:0   -> Zero 

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue<0)
    {
        printf(" Negative");
    }
    else if(iValue>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }
}
int main()
{
    int iValue=0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    return EXIT_SUCCESS;
}