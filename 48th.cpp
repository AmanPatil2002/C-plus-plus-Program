#include<iostream>

int main()
{
    // 48th Program

    std::string questions[] = {"1.What year was C++ created ? ",
                               "2.Who invented C++ ? ",
                               "3.What is the predecessor of C++ ? ",
                               "4.Is the Earth flat ? "};
    
    std::string options[][4] = {{"A. 1969","B. 1975","C. 1985","D. 1989"},
                               {"A. Guido van Rossum","B. Bjarne Stroustrup","C. John Cramack","D. Mark Zuckerburg"},
                               {"A. C","B. C+","C. C#","D. C--"},
                               {"A. YES","B. NO","C. Sometime","D. Not seen yet"}};
    
    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<'\n';
        std::cout<<questions[i] <<'\n';
        
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout<< options[i][j]<< '\n';
        } 

        std::cin>>guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout<<"CORRECT\n";
            score++;
        }
        else
        {
            std::cout<<"WRONG\n";
            std::cout<<"Answer : "<< answerKey[i]<<'\n';
        }    
    }
     std::cout<<"`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-"<<'\n';
     std::cout<<"                  )RESULTS(                     \n";
     std::cout<<"`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-"<<'\n';
     std::cout<<"CORRECT GUESSES : "<<score<<'\n';
     std::cout<<"Number of Question : "<<size<<'\n';
     std::cout<<"Score :"<< (score/(double)size)*100 <<"%";

    return 0;
}