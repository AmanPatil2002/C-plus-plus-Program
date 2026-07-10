#include<iostream>

int main()
{
    // Date:30-8-2022
    
    // 15th Program

    // Example on switch 

    char grade;

    std::cout << "What letter grade :";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You did great !";
        break;
    case 'B':
        std::cout << "You did good !";
        break;
    case 'C':
        std::cout << "You did okay !";
        break;
    case 'D':
        std::cout << "You did not do good";
        break;
    case 'F':
        std::cout << "You Failed";
        break;
    default:
        std::cout << "Please only enter in a letter grade (A-F)";
        break;
    }
    
    return 0;
}