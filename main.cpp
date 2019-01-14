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

void count(int age, int height)
{
    std::cout << "My age: " << age << "My height: " << height << std::endl;
}

void greet(std::string parameter)
{
    std::cout << "Greetings for the " << std::endl;
}

int main()
{
    cheer(30);
    count(26, 185);
    greet("Gods");
    future(1);

    return 0;
}