#include<iostream>

int main()
{
    // 53th Program

    // Pointer = variable that stores a memory address of another variable
    //           somrtime its easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Aman";
    int age = 19;
    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5",};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout<<*pName<<'\n';
    std::cout<<*pAge<<'\n';
    std::cout<<*pFreePizzas<<'\n';

    return 0;  
}