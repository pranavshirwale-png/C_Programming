// Q. Accept one number from user if the number is less than 10 the nprint "Hello" otherwise print "Demo".

#include <stdio.h>
#include <stdlib.h>

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
