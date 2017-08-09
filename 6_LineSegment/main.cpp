/*Natalia Q. Echeverri - CS161
2. Write a class called LineSegment that contains two Points that represent its two endpoints. It should have set methods
for both fields and a constructor that takes two Point parameters and passes them to the set methods to initialize the data
members. It should have a default constructor that creates two default Point objects and passes them to the set methods to
initialize the two endpoints. It should also contain a method called length that returns the length of the LineSegment
– by using the distanceTo method on its endpoints – and a method called slope that returns the slope of the LineSegment
(if the LineSegment is vertical, you can go ahead and return the value you get when dividing doubles by zero, which is
infinity). Write a main method (in LineSegment.cpp) that asks the user for the coordinates for a first point and then
the coordinates for a second point. You should create two corresponding Point objects and use those to create a LineSegment
object. You should then print out that LineSegment's length and slope (be sure to label your outputs). If the LineSegment is
vertical, don't print out infinity for its slope – state that the line segment is vertical (use isinf() to check for infinity).
Input validation: none required.*/

#include <iostream>
#include <cmath>
#include "Point.cpp"
#include "LineSegment.hpp"

using namespace std;

LineSegment::LineSegment(){
    setEndPoint1(Point());
    setEndPoint2(Point());
}

LineSegment::LineSegment(Point p1, Point p2){
    setEndPoint1(p1);
    setEndPoint2(p2);
}

void LineSegment::setEndPoint1(Point p1){
    point1 = p1;
}

void LineSegment::setEndPoint2(Point p2){
    point2 = p2;
}

Point LineSegment::getEndPoint1(){
    return point1;
}

Point LineSegment::getEndPoint2(){
    return point2;
}

double LineSegment::length(){
    return point1.distanceTo(point2);
}

double LineSegment::slope(){
    double x1, x2, y1, y2, m;

    x1 = point1.getXCoord();
    x2 = point2.getXCoord();
    y1 = point1.getYCoord();
    y2 = point2.getYCoord();

    m = (y2-y1)/(x2-x1);

    return m;
}

int main()
{
    double userX1, userX2,  userY1, userY2;

    cout << "Please enter starting point coordinates 'x y': ";
    cin >> userX1 >> userY1;
    cout << "Please enter ending point coordinates 'x y': ";
    cin >> userX2 >> userY2;

    Point startP(userX1, userY1);
    Point endP(userX2, userY2);

    LineSegment line(startP, endP);

    cout << endl;
    cout << "Length of line: " << line.length() << endl;

    //check for infinity
    if (!isinf(line.slope()))
        cout << "Slope: " << line.slope() << endl;
    else
        cout << "Slope is vertical. Slope = infinity." << endl;

    return 0;
}
