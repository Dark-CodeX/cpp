// call by val, call by ref

#include <iostream>

void func1(int x) // call by val
{
    std::cout << "Before: " << x << "\n";

    x += 10;

    std::cout << "After: " << x << "\n";
}

void func2(int &x) // call by ref
{
    std::cout << "Before: " << x << "\n";

    x += 10;

    std::cout << "After: " << x << "\n";
}

int main()
{
    int p = 100;
    func1(p);
    std::cout << "After FUNC1(): P was " << p << "\n";

    func2(p);
    std::cout << "After FUNC2(): P was " << p << "\n";
    return 0;
}
