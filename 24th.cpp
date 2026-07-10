#include<iostream>

int main()
{
    // Date:8-9-2022
    
    // 24th Program
    
    // break = break out of a loop
    // continue = skip current iteration

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        
        std::cout << i << '\n';
    }
    
    return 0;
}