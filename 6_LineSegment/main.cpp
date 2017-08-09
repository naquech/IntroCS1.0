#include <iostream>
#include <cmath>
#include "Point.cpp"
#include "LineSegment.hpp"


using namespace std;

LineSegment::LineSegment(){
    //Point p1;
    //Point p2;
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
