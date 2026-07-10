#include<iostream>

class Animal
{
    public:
        bool alive = true;
    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal
{
    public:
    void bark()
    {
        std::cout << "This Dog goes woof !\n";
    }
};
class Cat : public Animal
{
    public:
    void meow()
    {
        std::cout << "This Cat goes meow !\n";
    }
};

int main()
{
    // 70th Program 
    
    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Helps to reuse similar code found within multiple classes
    
    Dog dog;
    Cat cat;

    std::cout << dog.alive <<'\n';
    dog.eat();
    dog.bark();

    std::cout << cat.alive <<'\n';
    cat.eat();
    cat.meow();

    return 0;  
}