/*-------------------------------------------
Program 1: Layered Pine tree
Course: CS 141, Fall 2022

System: MacOS, Windows
Author: Moksh Shah, starter code provided by Dr. Sara Riazi
------------------------------------------- */

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menu_option = 0;
    cout << "Program 1: The Pine Tree            \n"
         << "Choose from the following options:  \n"
         << "   1. Display the HELLO graphic  \n"
         << "   2. Display The Pine Tree        \n"
         << "   3. Exit the program          \n"
         << "Your choice -> ";
    cin >> menu_option;
    
    if (menu_option == 3) { // Handle menu option of 3 to exit
        exit(0); // The call to exit the code successfully (0 means the runs didn't encounter any problem).  
    }

    else if (menu_option == 1) { // Handle menu option of 1 to display custom ASCII graphics
        // Display ASCII graphics for "HELLO".  
	// The main purpose of this part is to give you hints about usnig setw and setfill and their behaviors.
	
	//the character for the frame of our display.
	char frame = '-';
	cout << "Enter your frame character: ";
        cin >> frame;	
	cout << endl;
	// The goal of next three lines is to print a line with 77 dashes differently. 
	cout << setfill(frame); //change the default character for filling the fields defined using setw. You can change it fill to different character to see the difference.
        cout << setw(78) << "\n"; // \n counts in 78 so you will get 77 dashes plus one \n  
        cout << setw(78) << endl; ///after setfill you need to pass a string or character to push setfil to fill the field, otherwise you will see an empty line for this instruction. See the differnce in output from this line and the above line. 
        cout << setw(77) << frame << endl; //I use 77 with setfill and one extra at the end to get the same result
        
	cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
        cout << setw(77) << frame << endl; //the extra character is - so in total we will have 77 dashes.
        cout << setw(78) << "\n"; //again, the extra character is \n so you have set the width to 78	
	
	//you can do it this way using a for-loop too 
	 for (int i = 0; i < 77; i++) {
            cout << frame;
        }
        cout << endl;



    } else if (menu_option == 2) {
        // Prompt for and get the number of layers for the tree.
        int number_of_tree_layers = 0;
	cout << "Number of tree layers -> ";
        cin >> number_of_tree_layers;
        
	cout << endl; //do not remove this line. It is essential for the autograder! 

	int maxChar = 5 + (number_of_tree_layers - 1) * 2; // this variable signifies a max number of character that will be printed in the last row of the tree

        
        /************************************************************
                Code to print out the layers of the plam tree
        *************************************************************/
        
        for(int i = 1; i <= number_of_tree_layers; i++)  // for loop to print each layer of plam tree one by one, and each section has 3 rows max
        {
             int reqFirstRSpace = maxChar / 2 - (i - 1) +1; // this will calculate how much space we need for each first row
             int reqStars = 2 * i - 1; // this will calculate how many stars do we need for each row

             for(int j = 1; j <= 3; j++) // for loop to print 3 row/layers of stars to make a plam tree
             {
                for(int m = 1; m <= reqFirstRSpace - j; m++) // this for loop is used to create required space in the beginning so it can form a triangle shape for plam tree
                {
                        cout << " ";
                }

                for(int m = 1; m <= reqStars + 2 * (j - 1); m++) // this for loop is used to print out the '*' after the required spaces are generated
                {
                        cout << "*";
                }

                cout << endl;
             }
        }

        /************************************************************
                Code to print out the trunk of the plam tree
        *************************************************************/

        int trunkLength = 2 * number_of_tree_layers; /* this will multiply the number of layers of the tree by 2 so we can print out 2 layer trunk
                                                        for eg: if we are printing 2 layers of '*' for the tree's upper layer we need 4 layers of trunk in total
                                                        to make it look like a real tree.
                                                     */

        for(int i = 0; i < trunkLength; i++)    // for loop is used to print out the trunk lines '| | |' in a layer
        {
                for(int m = 1; m <= number_of_tree_layers; m++) // this for loop is used to create required space in the beginning so it can start print out the '|'
                {
                        cout << " ";
                }

                for(int m = 1; m < 3; m++)      // this for loop is used to print out '|' one by one for each layer
                {
                        cout << "|";
                }

                cout << endl;
        }



    } //end if( menu_option == 2)


    cout << endl; //DO NOT CHANGE THIS LINE
    
    return 0;
}