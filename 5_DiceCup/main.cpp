/* Natalia Q. Echeverri - CS161

Write a class called DiceCup that represents a cup that holds some number of dice (all with the same number of faces).
It will have two integer fields, numDice and numFaces. It should have set methods for each field and a constructor that
takes two parameters and passes them to the set methods to initialize the fields of the DiceCup. It should have a default
constructor that initializes numDice to 1 and numFaces to 2 (a single coin). It should have a method called rollDice that
simulates rolling the dice in the cup, returning the total value that was rolled. Remember that if there's more than one die,
you need to "roll" each one separately because it's not a uniform distribution (i.e. rolling a single die with the numbers 2
through 12 will not give you the same distribution of numbers as rolling two six-sided dice).
Write a main function (in the .cpp file) that asks the user for number of dice and number of faces and creates a DiceCup object
with those values. It should then ask the user how many times they would like to roll those dice and print out the values for that many rolls.
Input validation: The set methods should only accept non-negative values. If an input is invalid, set that field to 0 and print out an error message.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DiceCup.hpp"

using namespace std;

//default constructor
DiceCup::DiceCup(){
    setNumDice(1);
    setNumFaces(2);
}

//overloaded constructor. Takes two parameters and passes them to the set methods to initialize DiceCup
DiceCup::DiceCup(int numDiceIn, int numFacesIn)
{
    setNumDice(numDiceIn);
    setNumFaces(numFacesIn);
}

void DiceCup::setNumDice(int numDiceIn)
{
    if (numDiceIn < 0){
        numDiceIn = 0;
        cout << "Error. The cup needs to have 1 or more dice." << endl;
    }
    else
        numDice = numDiceIn;
}

void DiceCup::setNumFaces(int numFacesIn)
{
    if (numFacesIn < 0){
        numFacesIn = 0;
        cout << "Error. The number of faces needs to be 1 or more." << endl;
    }
    else
        numFaces = numFacesIn;
}

int DiceCup::rollDice()
{
    int roll = 0, totalRoll = 0;

    for (int i = 0; i < numDice; i++){
        roll = rand() % numFaces + 1;
        //srand(time(0));                 //cannot call this here, otherwise it will provide the same number after the second iteration, because it's called inside the loop == within the same second
        totalRoll += roll;
    }
    return totalRoll;
}


//main
int main()
{
    int cupDice, cupFace, rollTimes;
    int i = 0;

    cout << "Please enter the number of dice: " ;
    cin >> cupDice;
    cout << "Please enter the number of faces: ";
    cin >> cupFace;
    cout << "How many times would you like to roll?: ";
    cin >> rollTimes;

    srand(time(0));

    //create DiceCup object
   DiceCup userCup(cupDice, cupFace);

    //display results
    for(int i = 1; i <= rollTimes; i++){
        cout << "Roll " << i << " = " << userCup.rollDice() << endl;
    }

    return 0;
}
