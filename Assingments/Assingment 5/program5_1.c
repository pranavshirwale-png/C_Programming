//Find Greatest of Three Number

// input:10 50 30  ->50 is Greatest
// input:40 40 20  ->40 is Greatest
// input:15 15 15  ->15 is Greatest

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst,int iSecond,int iThird)
{
    if((iFirst>iSecond) && (iFirst>iThird))
    {
        printf("%d is greater",iFirst);
    }
    else if((iSecond>iFirst) && (iSecond>iThird))
    {
        printf("%d is greater",iSecond);
    }
    else if ((iFirst==iSecond) && (iFirst==iThird))
    {
        printf("%d Both are Eqal",iFirst);
    }
    else
    {
        printf("%d is greater",iThird);
    }
}

int main()
{   
    int iValue1=0, iValue2=0, iValue3=0;

    printf("Enter Three Numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}