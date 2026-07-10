#include<iostream>

int main()
{
    // Date:7-9-2022
    
    // 21th Program
    
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name : ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name;

    return 0;
}