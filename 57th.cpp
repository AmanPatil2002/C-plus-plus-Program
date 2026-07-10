#include<iostream>

int main()
{
    // 57th Program
  
    char *pGrade = NULL;
    int size;

    std::cout<< "How many grades to enter in ? :";
    std::cin>>size;

    pGrade = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter grade number "<<i + 1<<": ";
        std::cin>>pGrade[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout<<pGrade[i]<< " ";
    }
    
    delete[] pGrade;

    return 0;  
}