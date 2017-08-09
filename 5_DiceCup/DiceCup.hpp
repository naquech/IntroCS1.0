//DiceCup class specification file.

#ifndef DICECUP_HPP_INCLUDED
#define DICECUP_HPP_INCLUDED

class DiceCup
{
private:
    int numDice;
    int numFaces;
    //int rollTimes;

public:
    DiceCup();                      //default constructor
    DiceCup(int, int);              //overloaded constructor that initializes numDice to 1 and numFaces to 2
    void setNumDice(int);
    void setNumFaces(int);
    int rollDice();
};

#endif // DICECUP_HPP_INCLUDED
