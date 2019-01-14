#include <iostream>

void future(int param1, int param2)
{
    std::cout << "Libra" << std::endl;
    std::cout << "Dog" << std::endl;
    std::cout << "Your future looks like" <<param1 << ", " << param2 << std::endl;
}

void cheer(int number, int anotherParam)
{
    std::cout << "Cheer for the " << number << std::endl;
    std::cout << "C++ bitches!" << std::endl;
    std::cout << number << std::endl;
    std::cout << anotherParam << std::endl;
}

void count(int age, int height)
{
    std::cout << "Counting the countless " << age << std::endl;
    std::cout << "My age: " << age << "My height: " << height << std::endl;
}


void greet(std::string parameter, int month)
{    
    std::cout << "Greetings for the " << parameter <<  std::endl;
    std::cout << parameter << " " << month << std::endl;
    std::cout << "Greetings!" << std::endl;
}

int main()
{
    count(26, 185);
    cheer(30, 50);
    greet("Akos", 4);
    future(1, 2);

    return 0;
}