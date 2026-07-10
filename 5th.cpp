#include<iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    // Date:26-8-2022
    
    // 5th Program

    // namespace = provides a solution for preventing name conflicts in large projects.
    //             Each entity need a unique name. A namespace allows for identically
    //             named entities as long as the namespaces are differet.

    using namespace first;

    int x = 0;

    std::cout << first::x;
    
    return 0;
}