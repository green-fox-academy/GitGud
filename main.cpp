#include <iostream>


void cheer()
{
    std::cout << "HEY GITGODS!" << std::endl;
}

void count(int age)
{
    std::cout << age << std::endl;
}

void greet(){
    std::cout<<"I'm Akos Kapeter"<<std::endl;
}

int main() {

    count(26);
    cheer();
    greet();

    return 0;
}