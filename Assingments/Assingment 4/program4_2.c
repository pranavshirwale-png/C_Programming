//Check a number Even or Odd

//Input:24  ->Even Number
//Input:17  ->Odd Number

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
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