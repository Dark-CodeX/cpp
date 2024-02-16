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

    // 6. memcpy
    {
        // example: 1

        void *name = "tushar";
        void *copied_name = calloc(strlen(name) + 1, sizeof(char));
        memcpy(copied_name, name, strlen(name) + 1);
        printf("%s\n", copied_name);
        free(copied_name);

        // example: 2

        struct nums
        {
            int x, y; // 4+4=8
        };
        struct nums *my_numbers = calloc(1, sizeof(struct nums));
        my_numbers->x = 69;
        my_numbers->y = 420;

        struct nums *num_2 = calloc(1, sizeof(struct nums));
        memcpy(num_2, my_numbers, sizeof(struct nums));

        printf("%d, %d\n", num_2->x, num_2->y); // 69, 420

        free(my_numbers);
        free(num_2);
    }

    // 7. memcmp
    {
        // example: 1

        void *name = "tushar";
        void *name2 = "tushar";
        printf("%d\n", memcmp(name, name2, 7));

        // example: 2

        struct nums
        {
            int x, y; // 4+4=8
        };
        struct nums *my_numbers = calloc(1, sizeof(struct nums));
        my_numbers->x = 9;
        my_numbers->y = 82;

        struct nums *num_2 = calloc(1, sizeof(struct nums));
        num_2->x = 90;
        num_2->y = 82;

        printf("%d\n", memcmp(my_numbers, num_2, sizeof(struct nums)));

        free(my_numbers);
        free(num_2);
    }

    // 8. strstr (substring)
    {
        //            0123456789
        char *name = "Raghav Sant";
        printf("%s\n", strstr(name, "hav"));
        printf("%s\n", strstr(name, "Cha")); // null

        printf("%d\n", strstr(name, "hav") - name);
    }

    // 9. strtok
    {
        char sentense[] = "The programming paradigm used to build programs for almost all computers typically follows an imperative model";
        char *word = strtok(sentense, " ");
        while (word != NULL)
        {
            printf("%s\n", word);
            word = strtok(NULL, " "); // using NULL so that the static pointer inside strtok does NOT change or reassign itself
        }
    }

    // 10. memset
    {
        // calloc = malloc + memset(0)
        char *my_name = malloc(7 * sizeof(char));
        strcpy(my_name, "Tushar");
        printf("%s\n", my_name); // Tushar
        memset(my_name, 82, 7);
        printf("%s\n", my_name); // Tushar
    }
    return 0;
}