#include<iostream>

int myNum = 3;

void printNum();

int main()
{
    // Date:11-9-2022
    
    // 34th Program

    // Global variable = declared outside of all functions

    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';
    
    return 0;
}
void printNum()
{
    int myNum = 2;
    std::cout << ::myNum << '\n';
}