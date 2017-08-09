//Car class specification file
#ifndef CAR_HPP
#define CAR_HPP

class Car{

private:
    int year;
    std::string make;
    int currentSpeed;

public:
    Car();                          //default constructor
    Car(int, std::string, int);          //overloaded constructor
    void setYear(int);
    void setMake(std::string);
    void setCurrentSpeed(int);
    int getSpeed();
    int accelerate();
    int brake();
};

#endif // CAR_HPP
