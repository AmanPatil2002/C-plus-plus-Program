#include<iostream>

int main()
{
    // 44th Program

    // fill() = Fills arange with a specified value
    //          fill(begin, end, value)

    const int SIZE = 9;
    std::string S_name[SIZE];

    fill(S_name, S_name + (SIZE/3), "8");
    fill(S_name + (SIZE/3), S_name + (SIZE/3)*2, "12");
    fill(S_name + (SIZE/3)*2, S_name + SIZE, "2002");
    
    for (std::string name : S_name)
    {
        std::cout<<S_name<<'\n';
    }
    
    return 0;
}
