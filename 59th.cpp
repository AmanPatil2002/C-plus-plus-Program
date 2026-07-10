#include<iostream>

void walk(int steps); // recursive

int main()
{
    // 59th Program
  
    // recursion = A programming technique where a function
    //             invokes itself from within break a complex
    //             concept into a repeatable single steps
    
    // (iterative vs recursive)

    // Advantage = less code & is cleaner 
    //             useful for sorting & searching algorithms

    // Disadvantage = uses more memory
    //                slower
    
    walk(100);     
    
    return 0;  
}
void walk(int steps)
{
    if(steps > 0)
    {
        std::cout<<"You take a step!\n";
        walk(steps - 1);
    }
}