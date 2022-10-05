#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputLine = "Remeber you are unique, just like everyone else.";
    string first, second;

    //extract the first word
    int spacePos = inputLine.find(' ');
    first = inputLine.substr(0, spacePos);

    //extract the second word
    int start = spacePos + 1;
    spacePos = inputLine.find(' ', start);
    second = inputLine.substr(start, spacePos - start); // use start as the starting position for the search for the next space character and then subtract start from the position of the space character to get the length of the second word.

    cout << "The first word is: " << first << endl;
    cout << "The second word is: " << second << endl;

    return 0;

}