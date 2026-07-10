#include<iostream>

int main()
{
    // Date:9-10-2022
    
    // 38th Program

    // sizeof() = Determines the size in bytes of a;
    //            variable, data type, class, objects, etc.

    std::string name = "Aman Patil";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"max", "eve", "patrick"};

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " bytes\n";
    
    return 0;
}
