#include<iostream>

int main()
{
    // Date:2-9-2022
    
    // 20th Program
    
    std::string name;

    std::cout << "Enter your name :";
    std::getline(std::cin, name);

    //  length
    /*if(name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    }*/

    // empty
    /*if(name.empty())
    {
        std::cout << "You didn't enter your name";
    }
    else
    {
        std::cout << "Hello " << name;
    }*/

    // clear
    /*name.clear();
    std::cout << "HELLO " << name;
    */

    // append
    /*name.append("@gmail.com");
    std::cout << "Your user name is now " << name;
    */
    
    // at
    /*std::cout << name.at(0);
    */
    
    // insert
    /*name.insert(0, "@");
    std::cout << name;
    */
    
    // find
    /*std::cout << name.find(' ');
    */
    
    // erase
    name.erase(0, 3);
    std::cout << name;

    return 0;
}