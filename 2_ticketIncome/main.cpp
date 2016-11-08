/*There are three seating categories at a stadium. For a softball game,
Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9.
This program asks how many tickets for each class of seats were sold,
then displays the amount of income generated from ticket sales.
Format your dollar amount in a fixed-point notation with exactly two decimal
points and make sure the decimal point is always displayed.*/

#include <iostream>
#include <iomanip>      //Header file needed to use stream manipulators.

using namespace std;

int main()
{
    const int classA = 15;
    const int classB = 12;
    const int classC = 9;
    double atickets, btickets, ctickets, totalSales;

    cout << "How many Class A tickets were sold?: ";
    cin >> atickets;
    cout << "How many Class B tickets were sold?: ";
    cin >> btickets;
    cout << "How many Class C tickets were sold?: ";
    cin >> ctickets;

    totalSales = (15 * atickets) + (12 * btickets) + (9 * ctickets);

    cout << fixed << showpoint << setprecision (2) << "Income generated from ticket sales: $" << totalSales;

    return 0;
}
