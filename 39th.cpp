#include<iostream>

int main()
{    
    // 39th Program

    std::string students[] = {"aman","pravin","pratik","abhishek"}; 

    for(int i = 0;i < sizeof(students)/sizeof(std::string);i++)
    {
        std::cout << students[i] <<'\n';
    }    

    return 0;
}
