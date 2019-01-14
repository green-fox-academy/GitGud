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

void greet(std::string name , int month)
{
    name = "I'm Akos Kapeter";
    month = 4;
    std::cout <<name << " " << month<< std::endl;
}

int main()
{

    cheer(30);
    count(26);
    greet("asd",1);
    future(1);

    return 0;
}