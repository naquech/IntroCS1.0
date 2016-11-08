/* This program has a function that takes a positive integer as a parameter
and returns true if that number is prime otherwise returns false. */

#include <iostream>

using namespace std;

bool isPrime(int);      //Function prototype

int main()
{
    int number;

    cout << "Please enter a positive integer: \n";
    cin >> number;

    if (number > 0)
        {
            if (isPrime(number))
            cout << number << " is prime.\n";
            else
            cout << number << " is not prime.\n";
        }
    else
        cout << "Number must be greater than zero.";

    return 0;
}

/*****************************************************
                    isPrime
This function takes a positive integer as a parameter
and returns true if that number is prime otherwise
returns false.
******************************************************/
bool isPrime(int value)
{
    for (int i=2; i<value; i++)
    {
        if (value % i == 0)
        {
            return false;
        }
    }
    return true;
}

