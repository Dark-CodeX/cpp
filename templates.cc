#include <iostream>

// 1. function template

template <typename T>
T add(T x, T y)
{
    return x + y;
}

// 2. template classes

template <typename Q>
class mul_class
{
private:
    Q x, y;

public:
    mul_class(Q x__, Q __y)
    {
        this->x = x__;
        this->y = __y;
    }

    Q get_result() const
    {
        return this->x * this->y;
    }
};

int main()
{
    std::cout << add(20, 20) << "\n";
    std::cout << add<float>(20.5, 20.89) << "\n";

    mul_class<float> cl(3.14, 2.17);
    std::cout << cl.get_result() << "\n";
}