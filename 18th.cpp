#include<iostream>

int main()
{
    // Date:1-9-2022
    
    // 18th Program

    // && = check if two conditions are true
    // || = check if at least one of two condition is true
    // !  = reverses the logical state of its oprand

/*    // Example of &&
    int temp;           //temperature is in celsius
    
    std::cout << "Enter the temperature :";
    std::cin >> temp;

    if(temp > 0 && temp < 30)        
    {
        std::cout <<"The temperature is good !";
    }
    else
    {
        std::cout << "The temperature is bad !";
    }
*/

/*    // Example of ||
    int temp;           //temperature is in celsius
    
    std::cout << "Enter the temperature :";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30)       
    {
        std::cout <<"The temperature is bad !";
    }
    else
    {
        std::cout << "The temperature is good !";
    }
*/  

    // Example of !
    int temp;           //temperature is in celsius
    bool sunny = true;
    
    std::cout << "Enter the temperature :";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30)       
    {
        std::cout <<"The temperature is bad !\n";
    }
    else
    {
        std::cout << "The temperature is good !\n";
    }  

    if (!sunny)
    {
        std::cout << "It's cloudy outside";
    }
    else
    {
        std::cout << "It's sunny outside";
    }  
    

    return 0;
}