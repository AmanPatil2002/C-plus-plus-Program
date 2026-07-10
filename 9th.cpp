#include<iostream>

int main()
{
    // Date:28-8-2022
    
    // 9th Program

    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = precede value with new data type (int)

    double x = (int) 3.14;
    
    std::cout << x << '\n'; 

    // Example
    std::cout << (char) 100 << '\n';

    // Example
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%"; 

    return 0;
}