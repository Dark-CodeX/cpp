#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    r
    w
    rb
    wb
    a
    ab
    r+
    w+
    rb+
    wb+
    a+
    ab+
    */
    FILE *file = fopen("./call.cc", "rb");
    if (file == NULL)
    {
        perror("err:");
        return 1;
    }
    size_t len_file;


    fseek(file, 0, SEEK_END);
    len_file = ftell(file);
    fseek(file, 0, SEEK_SET);



    char *content = calloc(len_file + 1, sizeof(char));

    fread(content, sizeof(char), len_file, file);

    printf("%s\n", content);

    free(content);
    fclose(file);
}