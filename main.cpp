#include <iostream>


void cheer(int number){

    std::cout << "HEY GITGODS!" << std::endl;
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

int main() {

    cheer(30);
    count(26);
    greet();


    return 0;
}