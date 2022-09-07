#include <iostream>
#include <iomanip>
using namespace std;


void displayBoard(void);
void program1(void);
void program2(void);
void program3(void);

int p1, p2, p3, p4, p5, p6, p7, p8, p9;
int userInput;

int main() {

    p1=12,p2=14,p3=16,p4=18,p5=20,p6=22,p7=24,p8=26,p9=28;
    
    system("clear");

    cout << endl;

    cout << "Enter which program you would like to run: ";
    cin >> userInput;

    switch (userInput) {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    

    return 0;

}






void displayBoard(){
   //Don't edit this function 
   cout << endl
         << "------- \n"
         << "|" << p1 << "|" << p2 << "|" << p3 << "|\n"
         << "------- \n"
         << "|" << p4 << "|" << p5 << "|" << p6 << "|\n"
         << "------- \n"
         << "|" << p7 << "|" << p8 << "|" << p9 << "|\n"
         << "------- " 
         << endl;  
}


void program1 ()
{
    system("clear");
    
    displayBoard();

    cout << endl;
    
    cout << "Enter column you want to find sum: ";
    cin >> userInput;

    if(userInput == 1)
    {
        cout << p1 + p2 + p3 << endl;
    }
    else if(userInput == 2)
    {
        cout << p4 + p5 + p6 << endl;
    }
    else if(userInput == 3)
    {
        cout << p7 + p8 + p9 << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    cout << endl;
}

void program2 ()
{
    system("clear");

    displayBoard();

    cout << endl;
    
    cout << "Enter a row you want to reverse: ";
    cin >> userInput;

    // if(userInput == 1)
    // {
    //     cout << endl;
    //     cout << "------- \n";
    //     cout << "|" << p3 << "|" << p2 << "|" << p1 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p4 << "|" << p5 << "|" << p6 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p7 << "|" << p8 << "|" << p9 << "|\n";
    //     cout << "------- "; 
    //     cout << endl;
    // }
    // else if(userInput == 2)
    // {
    //     cout << endl;
    //     cout << "------- \n";
    //     cout << "|" << p1 << "|" << p2 << "|" << p3 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p6 << "|" << p5 << "|" << p4 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p7 << "|" << p8 << "|" << p9 << "|\n";
    //     cout << "------- "; 
    //     cout << endl;
    // }
    // else if(userInput == 3)
    // {
    //     cout << endl;
    //     cout << "------- \n";
    //     cout << "|" << p1 << "|" << p2 << "|" << p3 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p4 << "|" << p5 << "|" << p6 << "|\n";
    //     cout << "------- \n";
    //     cout << "|" << p9 << "|" << p8 << "|" << p7 << "|\n";
    //     cout << "------- "; 
    //     cout << endl;
    // }

    // just updated the global variables instead of printing out the board again
    if(userInput == 1)
    {
        p1 = 16;
        p2 = 14;
        p3 = 12;
    }
    else if(userInput == 2)
    {
        p4 = 22;
        p5 = 20;
        p6 = 18;
    }
    else if(userInput == 3)
    {
        p7 = 28;
        p8 = 26;
        p9 = 24;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    cout << endl;
}

void program3 () 
{
    system("clear");
    
    displayBoard();

    cout << endl;
    
    int a, b;
    cout << "Enter first row you want to swap: ";
    cin >> a;

    cout << "Enter second row you want to swap: ";
    cin >> b;

    if(a == 1 && b == 2 || a == 2 && b == 1)
    {
        int temp1 = p1;
        int temp2 = p2;
        int temp3 = p3;

        p1 = p4;
        p2 = p5;
        p3 = p6;
        p4 = temp1;
        p5 = temp2;
        p6 = temp3;
    }
    else if(a == 1 && b == 3 || a == 3 && b == 1)
    {
        int temp1 = p1;
        int temp2 = p2;
        int temp3 = p3;

        p1 = p7;
        p2 = p8;
        p3 = p9;
        p7 = temp1;
        p8 = temp2;
        p9 = temp3;

    }
    else if(a == 2 && b == 3 || a == 3 && b == 2)
    {
        int temp1 = p4;
        int temp2 = p5;
        int temp3 = p6;

        p4 = p7;
        p5 = p8;
        p6 = p9;
        p7 = temp1;
        p8 = temp2;
        p9 = temp3;
    }    
    else
    {
        cout << "Invalid input" << endl;
    }


    cout << endl;
}