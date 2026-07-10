#include<iostream>

int main()
{
    // Date:28-8-2022
    
    // 10th Program

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    /*
    std::cout << "What's your name ? : ";
    std::cin >> name;
    */
    
    // OR

    std::cout << "What's your full name ? : ";
    std::getline(std::cin, name);

    std::cout << "What's your age ? : ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';

    std::cout << "You are " << age << " years old";

    return 0;
}