/* This program represents a cup that holds some number
of dice (all with the same number of faces)*/

#include <iostream>

using namespace std;

//DiceCup Class declaration
class DiceCup
{
private:
    int numDice;
    int numFaces;
    int rollTimes;

public:
    DiceCup();              //default constructor
    DiceCup(int, int);      //constructor with two parameters
    void setNumDice(int);
    void setNumFaces(int);
    int rollDice();
};

//DiceCup member function implementation

DiceCup::DiceCup()      //Constructor that initializes NumDice and NumFaces
{
    setNumDice(1);
    setNumFaces(2);
}

DiceCup::DiceCup(int numDiceIn, int numFacesIn) //Constructor. Tales two parameters and passes them
{                                               //to the set methods to initialize DiceCup
    setNumDice(numDiceIn);
    setNumFaces(numFacesIn);
}

void DiceCup::setNumDice(int numDiceIn)
{
    numDice = numDiceIn;
}

void DiceCup::setNumFaces(int numFacesIn)
{
    numFaces = numFacesIn;
}

int DiceCup::rollDice()
{
    cout << "Hello from roll dice function";
}

//main
int main()
{
    DiceCup cup; //declare a DiceCup object

    int cupDice, cupFace;

    cout << "How many dice?: " ;
    cin >> cupDice;
    cout << "How many faces?: ";
    cin >> cupFace;

    //call member functions to set values
    cup.setNumDice(cupDice);
    cup.setNumFaces(cupFace);

    cup.rollDice();

    return 0;
}
