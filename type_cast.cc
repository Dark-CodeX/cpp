#include <iostream>
#include <cstdio>

int main()
{
    float a = 3.14;
    printf("%f\n", a);

    int b = (int)a; // type casting
    printf("%d\n", b);

    int *m = (int *)malloc(8);
}