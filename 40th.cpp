#include<iostream>

int main()
{    
    // 40th Program

    // foreach loop = loop that ease the traversal over an
    //                iterable data set

    std::string students[] = {"aman","pravin","pratik","abhishek"}; 

    for (std::string student : students)
    {
       std::cout<< student<<'\n';
    }
    
    return 0;
}
