/*Natalia Q. Echeverri CS161
Write a class named Supplies that keeps track of parts needed for a factory production line. There are three parts to keep track of,
and Supplies should have a field for how many of each are in stock. The three parts are thingamajigs, watchamacallits, and framistats.
There should be set methods for each of the three fields. There should be a constructor that takes three int parameters and calls the
set methods to initialize the number of each part in stock. There should be a default constructor that uses the set methods to initialize
the amounts in stock to 100 thingamajigs, 70 watchamacallits, and 50 framistats. When the factory orders more supplies, they want to order
each part back up to the default amounts. The class should have a method called printPartsOrder that will print out how many of each part
need to be ordered to bring what's in stock up to those amounts. For example, if the factory currently has 40 thingamajigs, 24 watchamacallits
and 12 framistats, then if printPartsOrder is called, it should print that the factory needs to order 60 thingamajigs, 46 watchamacallits and
38 framistats. There are two products this factory makes: thing1 and thing2. Producing a thing1 uses 1 thingamajig, 2 watchamacallits and 1 framistat.
Producing a thing2 uses 2 thingamajigs and 1 framistat. You should have methods called produceThing1 and produceThing2 that each take as a parameter
how many are produced and updates the parts in stock. So for example, if the factory has the default amounts of all three parts and then makes 20
of thing1, then it will have 80 thingamajigs, 30 watchamacallits, and 30 framistats left in stock.
Write a main method that asks the user how many of each part the factory currently has in stock. It should then allow the user to choose whether to
produce thing1, produce thing2, print a parts order, or quit. If they choose to produce thing1 or thing2, prompt them for how many to make, call the
appropriate method and loop back to the user menu. If they print a parts order, call the appropriate method and loop back to the menu.  If they quit,
the program should end. Input validation: none required. */

#include <iostream>
#include "Supplies.hpp"

using namespace std;

Supplies::Supplies(){
    setNumThingamajigs(100);
    setNumWatchamacallits(70);
    setNumFramistats(50);
}

Supplies::Supplies(int thingamaIn, int watchamaIn, int framistatsIn){
    setNumThingamajigs(thingamaIn);
    setNumWatchamacallits(watchamaIn);
    setNumFramistats(framistatsIn);
}

void Supplies::setNumThingamajigs(int thingamajigsIn){
    thingamajigs = thingamajigsIn;
}

void Supplies::setNumWatchamacallits(int watchamacallitsIn){
    watchamacallits = watchamacallitsIn;
}

void Supplies::setNumFramistats(int framistatsIn){
    framistats = framistatsIn;
}

void Supplies::printPartsOrder(){
    cout << "-- Number of Parts Needed in Stock -- " << endl;
    cout << "Thingamajigs: " << 100 - thingamajigs << endl;
    cout << "Watchamacallits: " << 70 - watchamacallits << endl;
    cout << "Framistats: " << 50 - framistats << endl;
}

void Supplies::produceThing1(int numThings1){
    thingamajigs -= (numThings1 * 1);
    watchamacallits -= (numThings1 * 2);
    framistats -= (numThings1 * 1);
}

void Supplies::produceThing2(int numThings2){
    thingamajigs -= (numThings2 * 2);
    framistats -= (numThings2 * 1);
}

void Supplies::_showCurrentStock(){
    cout << endl;
    cout << "-- Current Stock --" << endl;
    cout << "Thingamajigs: " << thingamajigs << endl;
    cout << "Watchamacallits: " << watchamacallits << endl;
    cout << "Framistats: " << framistats << endl;
}

int main()
{
    Supplies userSupplies;

    int partsThingamajigs;
    int partsWatchamacallits;
    int partsFramistats;
    int thing1;
    int thing2;
    int choice;

    do{
        userSupplies._showCurrentStock();
        cout << endl;
        cout << "-- MENU --" << endl;
        cout << "1. Produce Thing1" << endl;
        cout << "2. Produce Thing2" << endl;
        cout << "3. Print Parts Order" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch(choice){
        case 1:
            cout << "How many Thing1 do you want to produce?: ";
            cin >> thing1;
            userSupplies.produceThing1(thing1);
            break;
        case 2:
            cout << "How many Thing2 do you want to produce?: ";
            cin >> thing2;
            userSupplies.produceThing2(thing2);
            break;
        case 3:
            userSupplies.printPartsOrder();
            break;
        default: cout << "Please enter a valid choice." << endl;
        }
    }while(choice != 4);

    return 0;
}
