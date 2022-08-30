
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

    while(num <= userInput)     // while loop with a parameter where if num variable is less than the user input
    {
        for(int i = 1; i <= num; i++)   // for loop where it print out the numbers
        {
            cout << num << " ";
        }
        num++;      // increment number variable
        cout << endl;
    }

    cout << endl;

    return 0;
}