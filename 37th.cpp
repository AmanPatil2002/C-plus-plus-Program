#include<iostream>

int main()
{
    // Date:2-10-2022
    
    // 37th Program

    // array = A data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string car[3];
    
    car[0] = "Camaro";
    car[1] = "Mustang";
    car[2] = "Camry";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}
