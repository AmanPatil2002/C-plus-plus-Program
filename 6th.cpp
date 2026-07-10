#include<iostream>
#include<vector>

/*
typedef std::string text_t;
typedef int number_t;
*/

// Replace with 'using' (work better w/templates)
using text_t = std::string;
using number_t = int;

int main()
{
    // Date:26-8-2022
    
    // 6th Program

    // typedef = Reserved keyword used to create an additional name (alias) for another data type.
    //           New identifier for an existing type helps with readility and reduces types.
    //           Use when there is a clear benefite

    text_t firstName = "AMAN";
    number_t age = 19;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    
    return 0;
}