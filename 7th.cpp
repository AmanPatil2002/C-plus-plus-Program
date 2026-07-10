#include<iostream>

int main()
{
    // Date:28-8-2022
    
    // 7th Program

    // Arithmatic operators = return the result of a specific arithmatic operators (+ - * /)

    int students = 20;

    // Addition +
    /*
    students = students + 1;
        OR
    students+=1;
        OR
    students++;
    */

    // Substraction -
    /*
    students = students - 1;
        OR
    students-=1;
        OR
    students--;
    */

    // Multiplication *
    /*
    students = students * 2;
        OR
    students*=2;
    */

    // Division /
    /*
    students = students / 2;
        OR
    students/=2;
    */

    int remainder = students % 3;
    
    std::cout << remainder;
    
    return 0;
}