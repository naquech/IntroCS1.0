/* Natalia Q. Echeverri - CS161

Write a class called Box that has double members height, width and length. The class should have a three-parameter constructor
that takes three parameters and passes them to set methods to initialize the fields of the Box. It should have a default
constructor that initializes each field to 1. It should have set methods for each field. It should have a method that returns
the volume of the Box and a method that returns the surface area of the Box.
Write a main function (in the .cpp file) that asks the user for height, width and length and uses those values to create a
Box object. It should then print out the volume and surface area for that Box. Input validation: The set methods should only
accept non-negative values. If an input is invalid, set that field to 0 and print out an error message.
*/

#include <iostream>
#include "Box.hpp"

using namespace std;

Box::Box(double heightIn, double widthIn, double lengthIn)           //overloaded constructor
{
    setHeight(heightIn);
    setWidth(widthIn);
    setLength(lengthIn);
}

Box::Box()                           //default constructor
{
    setHeight(1);
    setWidth(1);
    setLength(1);
}

void Box::setHeight(double heightIn)
{
    if (heightIn < 0){
        heightIn = 0;
        cout << "Error. The height needs to be > 0." << endl;
    }
    else
        height = heightIn;
}

void Box::setWidth(double widthIn)
{
    if (widthIn < 0){
        widthIn = 0;
        cout << "Error. The width needs to be > 0." << endl;
    }
    else
        width = widthIn;
}

void Box::setLength(double lengthIn)
{
    if (lengthIn < 0){
        lengthIn = 0;
        cout << "Error. The length needs to be > 0." << endl;
    }
    else
        length = lengthIn;
}

double  Box::getVolume()
{
   return height*width*length;
}

double Box::getSurfaceArea()
{
    return (2*length*height) + (2*width*height) + (2*length*width);
}



int main(){

    Box userBox;
    double userHeight, userWidth, userLength;

    cout << "Please enter height: ";
    cin >> userHeight;
    cout << "Please enter width: ";
    cin >> userWidth;
    cout << "Please enter length: ";
    cin >> userLength;

    userBox.setHeight(userHeight);
    userBox.setWidth(userWidth);
    userBox.setLength(userLength);

    cout << "Volume: " << userBox.getVolume() << endl;
    cout << "Surface Area: " << userBox.getSurfaceArea() << endl;

    return 0;
}
