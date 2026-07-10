#include<iostream>

using namespace std;

int main()
{
    /*
            * * *
            * * *   
            * * *
    */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2 ; j++)
        {
            cout << " * ";
        }
    cout << endl;
    }
    cout << '\n';

    /*
            * 
            * *    
            * * *
    */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << " * ";
        }
    cout << endl;
    }
    cout << '\n';

    /*
            * * *
            * *    
            * 
    */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2-i ; j++)
        {
            cout << " * ";
        }
    cout << endl;
    }
    cout << '\n';

    /*
            * * *
              * *    
                * 
    */

    
    /*
                * 
              * *    
            * * *
    */


    /*
            1
            1 2
            1 2 3
    */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout <<  j + 1;
        }
    cout << endl;
    }
    cout << '\n';

    /*
            3 2 1 
            3 2 
            3
    */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j >= i+1 ; j--)
        {
            cout << j;
        }
    cout << endl;
    }
    cout << '\n';

    /*
            1
            1 *
            1 * 3
    */
    for ( k = "*")
    {
        for (int j = 1;j <=4;j++)
        {
            cout << j ;
        }
    cout << endl;
    }
    cout << '\n';

    return 0;
}