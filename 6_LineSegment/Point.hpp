//Point class specification file
#ifndef POINT_HPP
#define POINT_HPP

class Point{

private:
    double coordX;
    double coordY;

public:
    Point();                        //default constructor
    Point(double, double);          //overloaded constructor
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord() const;
    double getYCoord() const;
    double distanceTo(const Point&);            //takes as a parameter a constant reference to another Point and returns the distance
                                                //from the Point that was passed as a parameter to the Point that we called the method of.
};
#endif // POINT_HPP
