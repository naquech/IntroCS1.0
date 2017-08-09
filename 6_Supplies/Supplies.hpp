//supplies class specification file
#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP

class Supplies{
private:
    int thingamajigs;
    int watchamacallits;
    int framistats;

public:
    Supplies();                               //default constructor
    Supplies(int, int, int);                  //overloaded constructor
    void setNumThingamajigs(int);
    void setNumWatchamacallits(int);
    void setNumFramistats(int);
    void printPartsOrder();
    void produceThing1(int);                 //takes as parameter how many products of thing 1 to be made
    void produceThing2(int);                 //takes as parameter how many products of thing 2 to be made
    void _showCurrentStock();
};

#endif // SUPPLIES_HPP
