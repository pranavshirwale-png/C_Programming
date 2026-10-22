//Calculated Shoppoing Discount

//Input: 800    ->Payable Amount    =800.00
//Input: 2000   ->Payable Amount    =1800.00
//Input: 6000   ->Payable Amount    =4800.00
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount\n");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0;
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }

    if(fAmount >= 0)
    {
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}