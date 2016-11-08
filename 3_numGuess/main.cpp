/* This program generates a random number between 1 and 100 (inclusive) and asks the user
to guess what the number is. If the user's guess is higher than the random number,
the program displays "Too high. Try again."  If the user's guess is lower than the random
number, the program should display "Too low. Try again." The program uses a loop that
repeats until the user correctly guesses the random number, then displays a message
telling the user that their guess was correct and how many tries it took them. */

#include <iostream>
#include <cstdlib>  //header file needed to use srand and rand
#include <ctime>    //header file needed to use time

using namespace std;

int main()
{
    unsigned seed;              //Random generator seed
    double number, userGuess;
    int attempts = 0;

    seed = time(0);             //Use of the time function to get a 'seed' value for srand
    srand (seed);
    number = rand() % 100 + 1;  //Limiting the range of the random number
    cout << number << endl;

    do
    {
        cout << "Guess what the number is?: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > 100 || userGuess < 1)
            cout << "The number is in between 1 and 100" << endl;
        else if (userGuess > number)
            cout << "Too High!! Try Again." << endl;
        else if (userGuess < number)
            cout << "Too Low!! Try Again." << endl;
        else if (userGuess == number)
            cout << "Correct!! It took you " << attempts << " tries." << endl;
    } while (userGuess != number);


    return 0;
}
