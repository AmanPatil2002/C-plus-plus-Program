#include<iostream>

int main()
{
    // 49th Program

    // Memory Address = A location in memory where data is stored
    // A memory address can accessed with & (Address-of operator)

    std::string name = "Aman";
    int age = 19;
    bool student = true;

    std::cout<< &name<<'\n';
    std::cout<< &age<<'\n';
    std::cout<< &student<<'\n';

    return 0;
}