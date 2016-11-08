/*This program asks the user for an upper bound and a lower bound (both integers).
The program generates 5 random numbers that are between those upper and lower bounds (inclusive)*/

#include <iostream>
#include <cstdlib>  //Header file needed to use srand and rand
#include <ctime>    //Header file needed to use time.

using namespace std;

int main()
{
    unsigned seed;      //Random generator seed

    int upperBound, lowerBound, number1, number2, number3, number4, number5;

    cout<<"Please enter lower bound: ";
    cin>>lowerBound;
    cout<<"Please enter upper bound: ";
    cin>>upperBound;

    while (lowerBound > upperBound){
            cout << "Lower bound should be less than upper bound. \n";
            cout << "Please enter lower bound: ";
            cin >> lowerBound;
            cout << "Please enter upper bound: ";
            cin >> upperBound;
    }

    seed = time(0);     //Used the time function to get a seed value for srand.
    srand(seed);

    number1 = rand() % upperBound + lowerBound;
    number2 = rand() % upperBound + lowerBound;
    number3 = rand() % upperBound + lowerBound;
    number4 = rand() % upperBound + lowerBound;
    number5 = rand() % upperBound + lowerBound;

    cout<<" "<<number1;
    cout<<" "<<number2;
    cout<<" "<<number3;
    cout<<" "<<number4;
    cout<<" "<<number5;

    return 0;
}
