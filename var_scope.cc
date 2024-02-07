#include <iostream>

int main(int argc, char **argv)
{
    {
        int x = 10;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << x << std::endl;
    }
}