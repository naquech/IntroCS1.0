/* This program uses a loop to asks the user how many numbers they would like to enter.
It will then let the user enter that many values (assume they are doubles).
After all the numbers have been entered, the program displays the largest and smallest of those numbers. */

#include <iostream>

using namespace std;

int main()
{
    int userNumbers;
    double number, small = 0, large = 0;

    cout << "How many numbers would you like to enter?: ";
    cin >> userNumbers;

    for (int i = 1; i <= userNumbers; i++)
    {
            cout << "Enter number " << i << ": ";
            cin >> number;

//Compare each number entered

        if (number >= large)
            large = number;
        else if (number <= small)
            small = number;
    }

    cout << "The largest number entered is: " << large << endl;
    cout << "The smallest number entered is: " << small << endl;

    return 0;
}
