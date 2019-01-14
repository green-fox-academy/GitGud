#include <iostream>

void future(int paramater)
{
    std::cout << "Libra" << std::endl;
    std::cout << "Dog" << std::endl;
    std::cout << paramater << std::endl;
}

void cheer(int number)
{
    std::cout << "C++ bitches!" << std::endl;
    std::cout << number << std::endl;
}

void count(int age)
{
    std::cout << age << std::endl;
}

void greet()
{
    std::cout << "I'm Akos Kapeter" << std::endl;
}

int main()
{
    cheer(30);
    count(26);
    greet();
    future(1);

    return 0;
}