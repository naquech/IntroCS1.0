/* This program asks the user to enter two integers and then adds up all the integers between them
(inclusive) and displays the total. The user is allowed to enter the two values in either order.
This program figures out which is the lower bound and which is the higher bound. */

#include <iostream>

using namespace std;

int main()
{
    int number1, number2, upper, lower, sum = 0;

    cout << "Please enter two integers: ";
    cin >> number1 >> number2;

    if (number1 >= number2)
    {
        upper = number1;
        lower = number2;
    }
     else
     {
         upper = number2;
         lower = number1;
     }

    cout << "Lower bound: " << lower << endl;
    cout << "Upper bound: " << upper << endl;
    sum = lower + upper;
    cout << "The sum is: " << sum <<endl;


    return 0;
}
