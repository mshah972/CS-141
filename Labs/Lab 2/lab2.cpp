
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int userInput;      // int variable for user input
    int num = 1;        // int number variable to print our the number in sequence and set to 1 as default

    system("clear");    // clears the terminal for better look

    cout << endl;
    
    cout << "Enter a number: ";     // prompt to enter a number
    cin >> userInput;

    cout << endl;

    /****************************************
     * * *         Problem 1            * * *
     ****************************************/

    for(int i = 1; i <= userInput; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << num << " ";
        }
        num++;
        cout << "\n";
    }


    /****************************************
     * * *         Problem 2            * * *
     ****************************************/

    for(int i = 1; i <= userInput; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    
    /****************************************
     * * *         Problem 3            * * *
     ****************************************/
    
    for (int i = 1; i <= userInput; i++)
    {
        for(int k = userInput - i; k > 0; k--)
        {
            cout << " ";
        }
      
      
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}