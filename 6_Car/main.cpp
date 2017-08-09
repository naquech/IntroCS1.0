/*Natalia Q. Echeverri CS-161
Write a class named Car that has fields for year (int), make (string), and current speed (int). It should have set methods
for each field and a get method for the speed. It should have a constructor that takes the year and make and passes them
to the set methods for those fields, and passes 0 to setSpeed. It should have a default constructor that initializes year
to 0, make to "" and speed to 0. It should have an method called accelerate that adds 10 to the speed whenever it is called,
but with a maximum speed of 80. It should also have a method called brake that subtracts 10 from the speed whenever it is
called, but with a minimum speed of 0. Both accelerate and brake should use the setSpeed method.
Write a main method that asks the user for the year and make and creates a Car object with those values. Then it should
have a loop that offers the user the choice to accelerate, brake, or quit. If the user selects accelerate or brake, the
selected method should be called and the new speed displayed before looping back to getting another user choice. If the user
selects quit, the program should end. Input validation: none required. */

#include <iostream>
#include "Car.hpp"
#include <string>

using namespace std;

Car::Car(){
    setYear(0);
    setMake("");
    setCurrentSpeed(0);
}

Car::Car(int userYear, string userMake, int userSpeed){
    setYear(userYear);
    setMake(userMake);
    setCurrentSpeed(userSpeed);
}

void Car::setYear(int userYear){
    year = userYear;
}

void Car::setMake(string userMake){
    make = userMake;
}

void Car::setCurrentSpeed(int userSpeed){
    currentSpeed = userSpeed;
}

int Car::getSpeed(){
    return currentSpeed;
}

int Car::accelerate(){
    currentSpeed += 10;
    cout << "New speed: " << currentSpeed << endl;
}

int Car::brake(){
    currentSpeed -= 10;
    cout << "New speed: " << currentSpeed << endl;
}




int main()
{
    int yearIn;
    string makeIn;
    int choice;

    cout << "Please enter a year: ";
    cin >> yearIn;
    cout << "Please enter a make: ";
    cin >> makeIn;

    Car userCar;

    do{
        cout << "--- Car Menu ---" << endl;
        cout << "1. Accelerate" << endl;
        cout << "2. Brake" << endl;
        cout << "3. Quit" << endl;
        cin >> choice;

        if (choice == 1 || choice == 2){
           switch(choice){
                case 1: userCar.accelerate();
                break;
                case 2: userCar.brake();
                break;
                default: cout << "Please enter a valid choice (1-3):" << endl;
           }
        }
        else if (choice < 1 || choice > 3){
            cout << "Please enter a valid choice (1-3):" << endl;
        }
    }while (choice != 3);

    return 0;
}
