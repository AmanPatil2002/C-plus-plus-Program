#include<iostream>

int factorial(int num); // iterative

int main()
{
    // 60th Program

    std::cout<< factorial(10);
    
    return 0;  
}
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}