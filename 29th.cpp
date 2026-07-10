#include<iostream>

void happyBirthday(std::string name, int age);

int main()
{
    // Date:10-9-2022
    
    // 29th Program
    
    // function = a block of reusable code

    std::string name = "Aman";
    int age = 19;
    
    happyBirthday(name, age);

    return 0;
}
void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday Dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
     std::cout << "You are " << age << " years old \n";
}