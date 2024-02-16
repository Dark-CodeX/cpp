#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1. strlen
    2. strcpy
    3. strcat
    4. strncat
    5. strcmp
    6. memcpy
    7. memcmp
    8. strstr
    9. strtok
    10. memset
    */

    // 1. strlen
    {
        const char *mah_name = "Raghav";
        printf("%d\n", strlen(mah_name));
    }

    // 2. strcpy
    {
        char *a = "Tushar";
        char *heap_string = calloc(strlen(a) + 1, sizeof(char));
        strcpy(heap_string, a);
        printf("%s\n", heap_string);
        free(heap_string);
    }

    // 3. strcat
    {
        char *i = "Tushar";
        char *s = "Chaurasia";

        char *full_name = calloc(strlen(i) + strlen(s) + 1, sizeof(char));
        strcpy(full_name, i);
        strcat(full_name, s);
        printf("%s\n", full_name);
        free(full_name);
    }

    // 4. strncat
    {
        char *i = "Tushar";
        char *s = "Chaurasia";

        char *full_name = calloc(strlen(i) + strlen(s) + 1, sizeof(char));
        strcpy(full_name, i);
        strncat(full_name, s, 3);
        printf("%s\n", full_name);
        free(full_name);
    }

    // 5. strcmp
    {
        char *s1 = "abcd";
        char *s2 = "abcd";

        printf("%d\n", strcmp(s1, s2));
    }
    return 0;
}