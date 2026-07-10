#include<iostream>

int main()
{
    // Date:26-8-2022
    
    // 4th Program

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 109.45;
    int light = 10 * LIGHT_SPEED;

    std::cout << circumference << " cm" << '\n';
    std::cout << light << " km/hr";
    
    return 0;
}