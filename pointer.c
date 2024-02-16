#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     char *name = "Tushar";

//     char name2[] = "Tushar";

//     // name[1] = 'k';
//     name2[1] = 'k';

//     printf("%s\n%s\n", name, name2);
//     return EXIT_SUCCESS;
// }


// Dynamic Allocation
// 1. malloc
// 2. calloc, 0 init
// 3. realloc
// 4. free
// 5. valloc (on UNIX BASED ONLY) (page)
int main()
{
    char *name = malloc(7 * sizeof(char));
    if(!name)
    {
        return EXIT_FAILURE;
    }
    for (size_t i = 0; i < 7; i++)
    {
        printf("%c : %d\n", name[i], name[i]);
    }
    name[7] = 0;
    free(name); // always free the allocated mem, to avoid mem leaks
    
}