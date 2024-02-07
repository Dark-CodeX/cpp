#include <stdio.h>

int main()
{
    int x = 0;
    do
    {
        printf("Hello: %d\n", x++);
    } while (x < 10);
}