/* This program simulates a hailstone sequence. The main method prompts
the user for a positive integer (no input validation required), pass it
to the hailstone function and prints out the return value. */

#include <iostream>

using namespace std;

int hailstone(int);

int main()
{
    int userNumber, steps, iterations;

    cout << "Please enter an integer: ";
    cin >> userNumber;

        hailstone (userNumber);

        steps = hailstone (iterations);

       cout << "Number of times it took the sequence to reach 1: " << steps;

    return 0;

}

/*******************************************************
                    hailstone()
This function takes the starting integer as a parameter
and returns how many steps it takes to reach 1.
Rules:
even integer: (integer/2);
odd integer: (integer * 3) + 1
********************************************************/
int hailstone (int value)
{
    int iterationTimes = 0;

    while (value != 1)
    {

        if (value % 2 == 0)
        {
            value = value / 2;
        }

        else
        {
            value = (value * 3) + 1;
        }

        iterationTimes ++;
    }

       // cout << "Number of times it took the sequence to reach 1: " << iterationTimes;

    return iterationTimes;

}



