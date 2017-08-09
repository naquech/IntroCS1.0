//Box class specification file

#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
private:
    double height;
    double width;
    double length;

public:
    Box (double, double, double);       //overloaded constructor
    Box();                              //default constructor
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();

};
#endif // BOX_HPP
