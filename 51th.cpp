#include<iostream>

void printInfo(const std::string &name, const int &age);

int main()
{
    // 51th Program

    // const parameter = parameter that is efficient read-only 
    //                   code is more secure & conveys intent
    //                   useful for references and pointer

    std::string name = "Aman";
    int age = 19;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string &name, const int &age)
{
     std::string name = " ";
     int age = 0;
    std::cout<<name<<'\n';
    std::cout<<age<<'\n';
}