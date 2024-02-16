#include <iostream>

class my_class
{
public:
    int x;

    my_class(){
        this->x = 90;
    }
};

// new and delete operator
// equi to malloc and free resp.
// do not intermix malloc and new with free and delete resp.
int main()
{
    my_class *cl = new my_class();
    std::cout << cl->x << "\n";
    delete cl;
}