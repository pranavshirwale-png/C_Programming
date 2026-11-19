/*
    Function Name : main
    Description   : Accepts full name from user and displays it.
    Input         : Full name (string)
    Output        : Displayed full name
    Author        : Pranav Vinod Shirwale
    Date          : 04/11/2026
*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%[^'\n']s", Name);

    printf("Your name is %s", Name);

    return 0;
}
