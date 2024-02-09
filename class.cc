#include <iostream>

class my_class
{
private:
    int a, b;

public:
    my_class()
    {
        a = 0, b = 0;
    }

    my_class(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    int get_a()
    {
        return this->a;
    }

    int get_b()
    {
        return this->b;
    }

    int add()
    {
        return a + b;
    }

    int subs()
    {
        return a - b;
    }
};

int main(void)
{
    my_class cl(32, 3);
    std::cout << cl.get_a() << "\n";
    std::cout << cl.get_b() << "\n";
}