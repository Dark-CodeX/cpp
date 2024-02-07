#include <stdio.h>

int main()
{
    char X;
    printf("Enter a char: ");
    scanf("%c", &X);

    switch (X)
    {
    case 'A':
        printf("A dala bc");
        break;
    case 'B':
        printf("BC");
        break;

    default:
        printf("chal bsdk");
        break;
    }
}