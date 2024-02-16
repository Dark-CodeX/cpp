#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = "Tushar";
    char *initial = ptr;

    printf("INITIAL: %d\n", ptr);
    while (*ptr)
    {
        ptr++;
    }
    printf("FINAL: %d\n", ptr);

    printf("length = %d\n", ptr - initial);
}