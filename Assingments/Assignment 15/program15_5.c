/*
    Function Name : Percentage
    Description   : Calculates percentage from total marks and obtained marks.
    Input         : Total marks (int), Obtained marks (int)
    Output        : Percentage (float)
    Author        : Pranav Vinod Shirwale
    Date          : 04/11/2026
*/

#include<stdio.h>

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    if(iTotalMarks == 0)
    {
        return 0.0f;
    }

    return ((float)iObtainedMarks / (float)iTotalMarks) * 100.0f;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.1f%%", fRet);

    return 0;
}
