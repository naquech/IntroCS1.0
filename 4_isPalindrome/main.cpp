/* This program tells the user is the word entered is palindrome. */

/////takes aloha as palindrome!!! need to be fixed!!!!

#include <iostream>
#include <string>

using namespace std;

bool palindrome(string userWord);

int main()
{
    string userWord;

    cout << "Please enter the word: ";
    cin >> userWord;

    if (palindrome(userWord))
        cout << userWord << " is palindrome. \n";
    else
        cout << userWord << " is not palindrome. \n";

    return 0;
}

/********************************************
             palindrome()
This function takes a string as a parameter
and returns true if that string is a
palindrome otherwise returns false.
********************************************/
bool palindrome(string word)
{
    int length = word.length();

      string first = word.substr(0,1);
      string last = word.substr((length-1),1);

     if (first==last)
        {
         word = word.substr((0+1),(length-2));
          if (word.length()<=1)
	     return true;
          //palindrome(word);
        }
     else
       return false;
}
