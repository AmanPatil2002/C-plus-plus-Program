#include<iostream>

class Human
{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat()
        {
            std::cout<< "This person is eating\n";
        }
        void drink()
        {
            std::cout<< "This person is drinking\n";
        }
        void sleep()
        {
            std::cout<< "This person is sleeping\n";
        }
};

int main()
{
    // 66th Program 
    
    // object = A collection of attributes and methods
    //          They can have characteristics and could peform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          created from a class which acts as a "blue-print"
    
    Human human1;
    Human human2;

    human1.name = "Aman";
    human1.occupation = "Programmer";
    human1.age = 20;

    human2.name = "Nida";
    human2.occupation = "Pharmacist";
    human2.age = 19;

    std::cout << human2.name <<'\n';
    std::cout << human2.occupation <<'\n';
    std::cout << human2.age <<'\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;  
}