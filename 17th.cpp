#include<iostream>

int main()
{
    // Date:30-8-2022
    
    // 17th Program

   // ternary operator ?: = replacement to an if/else statement
   // condition ? expression1 : expression2;

   int grade = 28;
   grade >= 60 ? std::cout << "You Pass\n" : std::cout << "You Fail\n";

   // Example

   int number = 8;
   number % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

   // Example

   bool hungry = false;

   //hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";
   //   OR
   std::cout << (hungry ? "You are hungry" : "You are not hungry");

    return 0;
}