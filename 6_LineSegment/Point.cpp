/*Point class function implementation file
1. Write a class called Point that contains two doubles that represent its x- and y-coordinates. It should have get and
set methods for both parameters. It should have a constructor that takes two double parameters and passes those values
to the set methods to initialize its fields. It should have a default constructor that initializes both coordinates to
0. It should also contain a method called distanceTo that takes as a parameter a constant reference to another Point and
returns the distance from the Point that was passed as a parameter to the Point that we called the method of. You will
need to use sqrt().*/

#include "Point.hpp"
#include <cmath>

Point::Point(){
    setXCoord(0.0);
    setYCoord(0.0);
}

Point::Point(double xCoordIn, double yCoordIn){
    setXCoord(xCoordIn);
    setYCoord(yCoordIn);
}

void Point::setXCoord(double coordinateX){
    coordX = coordinateX;
}

void Point::setYCoord(double coordinateY){
    coordY = coordinateY;
}

double Point::getXCoord() const {
    return coordX;
}

double Point::getYCoord() const {
    return coordY;
}

double Point::distanceTo(const Point &p){

    double tempCoordX, tempCoordY, distance;

    distance = sqrt(pow((coordX - p.getXCoord()),2) + pow((coordY - p.getYCoord()),2));

    return distance;
}
