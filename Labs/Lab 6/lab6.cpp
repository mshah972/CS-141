// Lab 6, CS 141, Fall 2022
// Write and run the tests for the individual problems one at a time.
//
#include <iostream>
using namespace std;

// -----------------------------------------------------------------------------------------------------
/* 
Write a program using functions to find range of array. Range is the difference between the highest and lowest numbers
in the array.You need to write a function that calculates the range and the returns a range as integer which
should be called in problem1() to recieve full credit.
When input is
1 8
15 23 32 45 21 29 41 37
Output should be:
30

*/


void calculateRange()
{
   
   int n;
   
   cout << "Enter array size: ";
   cin >> n;
   
   int array[n];
   
   cout << "Enter array elements: ";
   
   for(int i = 0; i < n; i++)
   {
      cin >> array[i];
   }
   
    int max = array[0];
    int min = array[0];

    for(int i = 0; i < n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    
   int range = max - min;
    
   cout << "The range of the array is: " << range << endl;
}

  
void problem1()
{
   
   // Your code here for Problem 1
   //write code here to take input for the elemets in the array and call the calculateRange() function with array as parameter
   // ...
   
   calculateRange();
   
   /*Implement this function above problem1() and call it within problem 1 to receive full credit, 
you should figure out parameters and include them and also check for return types.*/

}//end problem1()


// -----------------------------------------------------------------------------------------------------
/* Write a program using functions to find sum of even numbers in a series. You need to write a function 
that takes count of numbers in the series as parameter and calculates the sum of the even numbers in that series.
 that function should be called in problem2() to recieve full credit.
 When input is
2 5 
1 2 3 4 5
Output should be:
6*/

void calculateSum()
{
   int n; 
   cout << "Enter number of elements you want to enter: ";
   cin >> n;
   
   int array[n];
   
   cout << "Enter values: ";
   for(int i = 0; i < n; i++)
   {
      cin >> array[i];
   }
   
   int total = 0;
   
   for(int i = 0; i < n; i++)
   {
      if(array[i] % 2 == 0)
      {
         total += array[i];
      }
   }
   
   cout << "The sum of the even numbers is: " << total << endl;
   
}
 
void problem2()
{
   
   // Your code here for Problem 2
   // write code here to read the number of elements that the user would like to enter.
    
   calculateSum();
   
   /*Implement this function above problem2() and call it within problem 2 to recieve full credit, 
you should figure out parameters and include them and also check for return types.*/


   
}//end problem2()


// -----------------------------------------------------------------------------------------------------
/* Write a program using function that takes an array as input parameter. The output should print a new array whose elemets
are obtained by dividing the product of all elements in the original array with each element of the original array. 
Implement product() function above problem 3 and call it within problem 3 to recieve full credit.
When input is
3 5
1 2 3 4 5

Output should be:
120 60 40 30 24 
*/

void product()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int array[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int total = 1;

    for(int i = 0; i < n; i++)
    {
        total *= array[i];
    }

    cout << "The new array is: ";

    for(int i = 0; i < n; i++)
    {
        cout << total / array[i] << " ";
    }

    cout << endl;

}


void problem3()
{
   
   // Your code here for Problem 3 (Extra Credit)
   // write your code to read array elements and pass the array as the parameter.
    product();/*implement this function above problem 3 and call it within problem 3 to recieve full credit, 
you should figure out parameters and include them and also check for return types.*/
}//end problem3()


int main() {
   // You should not change the code below this point.  
   // All your changes should be inside the individual functions shown above.
   int menuOption = 0;
   
   cout << "Enter which problem to run: ";
   cin >> menuOption; 
   switch(menuOption) {
      case 1: problem1(); break;
      case 2: problem2(); break;
      case 3: problem3(); break;
   }  

   cout << "Done." << endl;
   return 0;
}// end main()




