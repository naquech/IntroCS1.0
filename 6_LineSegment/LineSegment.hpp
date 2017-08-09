//LineSegment class specification file
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment{

private:
    Point point1;
    Point point2;

public:
    LineSegment ();                                     //default constructor
    LineSegment (Point, Point);                         //overloaded constructor
    void setEndPoint1(Point);
    void setEndPoint2(Point);
    Point getEndPoint1();
    Point getEndPoint2();
    double length();
    double slope();

};
#endif // LINESEGMENT_HPP
