//Point class function implementation file
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
    /*double distance, x1, x2, y1, y2;
    x1 = getXCoord();
    x2 = p.getXCoord();
    y1 = getYCoord();
    y2 = p.getYCoord(); */

    double tempCoordX, tempCoordY, distance;

//    tempCoordX = p.getXCoord();
//    tempCoordY = p.getYCoord();

    distance = sqrt(pow((coordX - p.getXCoord()),2) + pow((coordY - p.getYCoord()),2));

    return distance;
}
