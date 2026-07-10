#include<iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    // 63th Program 
    
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types 
    //          (string, int, double, bool, etc.)
    //          variables in a struct are known as "Members"
    //          member can be access with . "Class Member Access Operators"
    
    student student1;
    student1.name = "Aman";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Nida";
    student2.gpa = 2.2;
    student2.enrolled = true;

    student student3;
    student3.name = "Musa";
    student3.gpa = 1.2;
    student3.enrolled = false;

    std::cout<<student1.name<<'\n';
    std::cout<<student1.gpa<<'\n';
    std::cout<<student1.enrolled<<'\n';

    std::cout<<student2.name<<'\n';
    std::cout<<student2.gpa<<'\n';
    std::cout<<student2.enrolled<<'\n';

    std::cout<<student3.name<<'\n';
    std::cout<<student3.gpa<<'\n';
    std::cout<<student3.enrolled<<'\n';

    return 0;  
}
