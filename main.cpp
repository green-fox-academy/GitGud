#include <iostream>

void future(int param1, int param2)
{
    std::cout << "Libra" << std::endl;
    std::cout << "Dog" << std::endl;
    std::cout << param1 << ", " << param2 << std::endl;
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
    std::cout << "Greetings!" << std::endl;
}

int main()
{

    cheer(30);
    count(26);
    greet();
    future(1, 2);

    return 0;
}