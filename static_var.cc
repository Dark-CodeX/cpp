#include <iostream>

int func(int *x)
{
    static int inside_variable;
    if (x != NULL)
        inside_variable = *x;
    return inside_variable;
}

int main()
{
    int val = 422;
    std::cout << func(&val) << std::endl;
    std::cout << func(nullptr) << std::endl;
}