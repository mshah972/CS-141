/****************************
 *
 * Program 3: Passworrd Checker
 * 
 * Course: CS 141
 * System: MacOs, Windows
 * Starter Code: Dr. Sara Riazi
 * Student Author: Moksh Shah
 *
 * *** **********************/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


const string rule_msg_1 = "The selected password must be at least eight characters long.";
const string rule_msg_2 = "The selected password must have at least one uppercase letter.";
const string rule_msg_3 = "The selected password must have at least one lowercase letter.";
const string rule_msg_4 = "The selected password must have at least one digit.";
const string rule_msg_5 = "The selected password must have at least one of special characters: [@,!,#,^,&,*,$]";
const string rule_msg_6 = "The selected password has been leaked.";
const string rule_msg_7 = "The selected password cannot contain a dictionary word.";

bool has_at_least_8_chars(string);
bool check_password(string, string, string);
bool has_uppercase(string);
bool has_lowercase(string);
bool has_digit(string);
bool has_special_char(string);
bool is_leaked(string, string);
bool is_english_word(string, string);
string remChar(string);


	
/****
 * Runs the main part of the program
 ****/
int run(string leaked_password_file, string english_word_file)
{
    string password;
    cout << "Enter password: ";
    getline(cin, password);


    if(check_password(password, leaked_password_file, english_word_file))
    {
        cout << "Password accepted!" << endl;
    }
    else
    {
        cout << "Password rejected!" << endl;
    }

    return 0;
}

/****
 * Checks if the password is valid
 ****/

bool check_password(string password, string leaked_password_file, string english_word_file)
{
    bool flag = true;
    if(flag)
    {
        if(!has_at_least_8_chars(password))
        {
            cout << rule_msg_1 << endl;
            flag = false;
        }

        if(!has_uppercase(password))
        {
            cout << rule_msg_2 << endl;
            flag = false;
        }

        if(!has_lowercase(password))
        {
            cout << rule_msg_3 << endl;
            flag = false;
        }

        if(!has_digit(password))
        {
            cout << rule_msg_4 << endl;
            flag = false;
        }

        if(!has_special_char(password))
        {
            cout << rule_msg_5 << endl;
            flag = false;
        }

        //if all the above conditions are true, check if the password is leaked
        if(flag)
        {
            if(is_leaked(password, leaked_password_file))
            {
                cout << rule_msg_6 << endl;
                flag = false;
            }
            // if the password is not leaked, check if it is an english word
            if(flag)
            {
                if(is_english_word(password, english_word_file))
                {
                    cout << rule_msg_7 << endl;
                    flag = false;
                }
            }
        }
    }
    return flag;
}

/****
* Check if the password is at least 8 characters long
****/

bool has_at_least_8_chars(string password)
{
    if(password.length() >= 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/****
 * Checks if the password has an uppercase letter
 ****/

bool has_uppercase(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(isupper(password[i]))
        {
            return true;
        }
    }

    return false;
}

/****
 * Checks if the password has a lowercase letter
 ****/

bool has_lowercase(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(islower(password[i]))
        {
            return true;
        }
    }

    return false;
}

/****
 * Checks if the password has a digit
 ****/

bool has_digit(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(isdigit(password[i]))
        {
            return true;
        }
    }

    return false;
}

/****
 * Checks if the password has a special character
 ****/

bool has_special_char(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] == '@' || password[i] == '!' || password[i] == '#' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '$')
        {
            return true;
        }
    }

    return false;
}

string remChar(string thePassword)
{
    //remove all the special characters from the password
    for(int i = 0; i < thePassword.length(); i++)
    {
        if(thePassword[i] == '@' || thePassword[i] == '!' || thePassword[i] == '#' || thePassword[i] == '^' || thePassword[i] == '&' || thePassword[i] == '*' || thePassword[i] == '$')
        {
            thePassword.erase(i, 1);
            i -= 1;                    
        }
    }
    
    return thePassword;
}

// /****
//  * Checks if the password is leaked
//  ****/



bool is_leaked(string password, string leaked_password_file)
{
    ifstream file;
    vector<string> leaked_passwords;
    string newFileData = "";
    file.open(leaked_password_file);
    string line;


    while(getline(file, line)) 
    {
        leaked_passwords.push_back(line);
    }
    file.close();

    password = remChar(password);
    //convert the password to lowercase
    for(int i = 0; i < password.length(); i++)
    {
        password.at(i) = tolower(password.at(i));
    }

    int first = 0;
    int last = leaked_passwords.size() - 1;
    
    while (last >= first) 
    {
        int middle = (first + last) / 2;

        newFileData = remChar(leaked_passwords.at(middle));

        if (password == newFileData) 
        {
            return true;
        }
        else if (password < newFileData) 
        {
            last = middle - 1;
        }
        else 
        {
            first = middle + 1;
        }
    }
    return false;
}


/****
 * Checks if the password is an english word
 ****/

bool is_english_word(string passwords, string english_word_file)
{
    //vector to store the words from the file
    vector<string> english_words;

    //open the file
    ifstream file;
    file.open(english_word_file);
    string line;

    //read the file and store the words in the vector
    while(getline(file, line))
    {
        english_words.push_back(line);
    }
    file.close();
    passwords = remChar(passwords);
    for(int i = 0; i < passwords.length(); i++)
    {
        if(isdigit(passwords.at(i)))
        {
            passwords.erase(i, 1);
            i -= 1;                     
        }
    }

    //convert the password to lowercase
    for(int i = 0; i < passwords.length(); i++)
    {
        passwords.at(i) = tolower(passwords.at(i));
    }
    int first1 = 0;
    int last1 = english_words.size() - 1;
    while (last1 >= first1) 
    {
        int middle1 = (first1 + last1) / 2;
        if (passwords == (english_words.at(middle1))) 
        {
            return true;
        }
        else if (passwords < (english_words.at(middle1))) 
        {
            last1 = middle1 - 1;
        }
        else 
        {
            first1 = middle1 + 1;
        }
    }
    
    return false;  
}


int main() {
	/** Change the address of the files appropriatly based on your local machine.
	 * This main function will be replaced during testing. Do not add any line of code to the main function 
	 **/
	string leaked_password_file = "alleged-gmail-password.txt"; //change this based on the location of the file on your machine
	string english_word_file = "words_5.txt"; //change this based on the location of the file on your machine
	run(leaked_password_file, english_word_file);
	return 0;	
}
