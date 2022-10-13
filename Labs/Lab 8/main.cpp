#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int problem1()
{
    string sentence;
    
    cout << "Enter the string: ";
    getline(cin, sentence);

    string vowels[sentence.length()];


    //check for any vowels in the string and store them in an array
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            vowels[i] = sentence[i];
        }
    }

    //print the vowels
    cout << "The vowels in the string are: ";
    for (int i = 0; i < sentence.length(); i++)
    {
        cout << vowels[i];
    }

    cout << endl;

    return 0;

}

int problem2()
{
    char head = 'H';
    char tail = 'T';

    double heads = 0;
    double tails = 0;
    
    string coinFlip;

    cout << "Enter the string: ";
    getline(cin, coinFlip);

    //check for heads and tails
    for (int i = 0; i < coinFlip.length(); i++)
    {
        if (coinFlip[i] == head)
        {
            heads++;
        }
        else if (coinFlip[i] == tail)
        {
            tails++;
        }
    }

    //calculate the percentage of heads and tails and round to 2 decimal places
    double headsPercentage = (heads / coinFlip.length()) / 100;
    double tailsPercentage = round((tails / coinFlip.length()) * 10000) / 100;
    setprecision(4);

    cout << "Heads percentage is " << headsPercentage << " and Tail percentage is " << tailsPercentage << endl;

    return 0;

}

int problem3()
{
    //convert string to int
    int size;
    

    cout << "Enter array size: ";
    cin >> size;

    int element[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element[i];
    }

    string arr[size];


   for(int i = 0; i < size; i++)
   {
        arr[i] = char(element[i] % 26 + 96);
   }

    cout << "The string equivalent is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    cout << endl;

    return 0;


}


int main()
{
    //problem1();
    problem2();
    //problem3();
    return 0;
}