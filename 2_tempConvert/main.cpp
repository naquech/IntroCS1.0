/* This program that converts Celsius temperatures to Fahrenheit temperatures.
It prompts the user to input a Celsius temperature and should display the
corresponding Fahrenheit temperature.*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Please enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = ((9 * celsius) / 5) + 32;

    cout << fixed << showpoint << setprecision(2) << "Fahrenheit temperature: " << fahrenheit;

    return 0;
}
