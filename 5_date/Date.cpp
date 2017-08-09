/* Natalia Q. Echeverri - CS161
Design a class called Date that has integer members to store month, day and year. The class should have a three-parameter
constructor that takes a month, day and year as parameters and passes them to set methods to initialize the data members.
It should have a default constructor that initializes the object to a date of 1/1/2001. It should have set methods for each
data member. It should have a separate print method for each of the following formats: 3/15/13  - March 15, 2013  - 15 March 2013
Write a main method (in the .cpp file) that asks the user for month, day and year, and uses them to create a Date object.
You should have a loop that provides the user with a menu of the three format options or "quit".  When the user selects a
format option, the Date object should be printed in that format. When the user selects "quit", the program should end.
Input validation: The set methods should only accept a month between 1 and 12, and a day between 1 and the number of days
in the selected month. If an input is invalid, set that field to 0 and print out an error message.
*/

//Does not check for leap year !!

#include <iostream>
#include <string>
#include "Date.hpp"

using namespace std;

Date::Date(int userMonth, int userDay, int userYear){
    setMonth(userMonth);
    setDay(userDay);
    setYear(userYear);
}

Date::Date(){
    setMonth(1);
    setDay(1);
    setYear(2001);
}

void Date::setMonth(int userMonth){
    if (userMonth < 1 || userMonth > 12){
        month = 0;
        cout << "Error. PLease enter a month between 1 and 12." << endl;
    }
    else
        month = userMonth;
}

void Date::setDay(int userDay){
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (userDay < 1 || userDay > 31){
                day = 0;
                cout << "Error. Please enter a day between 1 and 31." << endl;
            }
            else{
                day = userDay;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
             if (userDay < 1 || userDay > 30){
                day = 0;
                cout << "Error. Please enter a day between 1 and 30." << endl;
            }
            else{
                day = userDay;
            }
            break;

        case 2:
            if (userDay < 1 || userDay > 29){
                day = 0;
                cout << "Error. Please enter a day between 1 and 29." << endl;
            }
            else{
                day = userDay;
            }

        default:
            day = 1;
            break;
    }
}

void Date::setYear(int userYear){
    year = userYear;
}

void Date::print1(){                       //format: 3/15/13
    cout << month << "/" << day << "/" << year << endl;
    cout << endl;
}

void Date::print2(){                       //format: March 15, 2013
    cout << _showMonth(month) << " " << day << ", " << year << endl;
    cout << endl;
}

void Date::print3(){                       //format: 15 March 2013
    cout << day << " " << _showMonth(month) << " " << year << endl;
    cout << endl;
}

string Date::_showMonth(int monthNum){
    switch (monthNum){
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
    }
}


int main(){

    int monthIn, dayIn, yearIn;
    int choice;

    Date userDate;

//Get user information
    do{
        cout << "Please enter a month (1-12): ";
        cin >> monthIn;

        userDate.setMonth(monthIn);

    }while (monthIn < 1 || monthIn > 12);


    cout << "Please enter a day: ";
    cin >> dayIn;
    if ((monthIn == 2) && dayIn > 29){
        do{
            cout << "Enter a correct number of days (1-29): ";
            cin >> dayIn;
            }while (dayIn > 29);

            userDate.setDay(dayIn);
    }
    else if ((monthIn == 4 || monthIn == 6 || monthIn == 9 || monthIn == 11) && dayIn > 30){
        do{
            cout << "Enter a correct number of days (1-30): ";
            cin >> dayIn;
        }while (dayIn > 30);

        userDate.setDay(dayIn);
    }
    else if ((monthIn == 1 || monthIn == 3 || monthIn == 5 || monthIn == 7 || monthIn == 8 || monthIn == 10 || monthIn == 12) && dayIn > 30){
        do{
            cout << "Enter a correct number of days (1-31): ";
            cin >> dayIn;
        }while (dayIn > 31);

        userDate.setDay(dayIn);
    }

    do{
        cout << "Please enter a year: ";
        cin >> yearIn;

        userDate.setYear(yearIn);

    }while(yearIn < 0 || yearIn > 9999);


    //loop to display menu
    do{
        cout << " --- Format Options --- " << endl;
        cout << " 1. 3/15/13 " << endl;
        cout << " 2. March 15, 2013 " << endl;
        cout << " 3. 15 March 2013 " << endl;
        cout << " 4. Quit program. \n" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        if (choice >=1 && choice <= 3){
            switch(choice){
                case 1:
                    userDate.print1();
                    break;
                case 2:
                    userDate.print2();
                    break;
                case 3:
                    userDate.print3();
                    break;
                default: cout << "\nPlease enter a valid option (1-4)\n" << endl;
            }
        }
    }while (choice != 4);

    return 0;
}
