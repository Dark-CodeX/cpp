#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // space, enter ("\n"), 0, 127
    std::cout << name << "\n";
}