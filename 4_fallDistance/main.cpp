/* The following formula can be used to determine the distance an object falls due to
gravity in a specific time period: d=(1/2)*g*t^2 where d is the distance in meters,
g is 9.8 and t is the time in seconds that the object has been falling. This program
has a function that returns the distance that the object has fallen in the time given. */

#include <iostream>
#include <cmath>

using namespace std;

double fallDistance(double);

int main()
{
    double distance, time;

    cout << "Enter the time (in seconds) that the object has been falling: ";
    cin >> time;

    distance = fallDistance(time);

    cout << "The distance is: " << distance << " meters" << endl;

    return 0;
}

/*****************************************************
                fallDistance()
This function takes the falling time as an argument;
it returns the distance in meters that the object
has fallen in that time.
******************************************************/
double fallDistance(double userTime)
{
    double gravity = 9.8;

    return 0.5 * gravity * (pow(userTime, 2));
}
