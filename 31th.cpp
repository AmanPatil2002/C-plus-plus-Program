#include<iostream>

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    // Date:10-9-2022
    
    // 31th Program
    
    std::string firstName = "Aman";
    std::string lastName = "Patil";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;

    return 0;
}
std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}
