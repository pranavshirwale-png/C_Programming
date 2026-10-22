//Check a Votting eligiblity

//Input:21  ->Eligible for Votting
//Input:16  ->Not Eligible for votting
//Input:-5  ->Invalid Age

#include<stdio.h>
#include<stdlib.h>

void CheckVottingEligibility(int iAge)
{
    if(iAge>=18)
    {
        printf("Eligible For votting");
    }
    else if(iAge<=0)
    {
        printf("Invalid Number");
    }
    else
    {
        printf("Not Eligible for Votting");
    }
}
int main()
{
    int iAge=0;

    printf("Enter a Number:\n");
    scanf("%d",&iAge);

    CheckVottingEligibility(iAge);
    return EXIT_SUCCESS;
}