//Date class specification file
#ifndef DATE_HPP
#define DATE_HPP

//#include <string>

class Date{
private:

    int month, day, year;
    std::string _showMonth(int);     //auxiliary function to convert month number into string


public:

    Date(int, int, int);        //overloaded constructor
    Date();                     //default constructor
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void print1();
    void print2();
    void print3();

};
#endif // DATE_HPP
