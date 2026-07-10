#include<iostream>
#include<cmath>

int main()
{
    // Date:29-8-2022
    
    // 12th Program

    double a;
    double b;
    double c;

    std::cout << "Enter side A :";
    std::cin >> a;

    std::cout << "Enter side B :";
    std::cin >> b;

    /*
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    */
    //  OR
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C : " << c;

    return 0;
}