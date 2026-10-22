//Accept one character from user and convert case of that character

//Input:a  outpt:A
//Input:D  outpt:d

#include<stdio.h>
#include<stdlib.h>


void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);
    return EXIT_SUCCESS ;
}