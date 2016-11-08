/* This program uses a function to sort three
values (ascending) prompted by the user. */

#include <iostream>

using namespace std;

void ascending(int&, int&, int&);

int main()
{
    int first, second, third;

    cout << "Please enter three integers: ";
    cin >> first >> second >> third;

    cout << "Original order: \n";
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    ascending(first, second, third);

    cout << "\nSorted order: \n";
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    return 0;
}

/************************************
            ascending()
 This void function takes three int
 parameters by reference and sorts
 their values into ascending order.
 ************************************/
 void ascending(int &num1, int &num2, int &num3)
 {
     int temp;

     if (num1 > num2)
	{
	  temp = num1;
	  num1 = num2;
	  num2 = temp;
	}

	 if(num1 > num3)
	{
	  temp = num1;
	  num1 = num3;
	  num3 = temp;
	}

	if(num2 > num3)
	{
	  temp = num2;
	  num2 = num3;
	  num3 = temp;
	}
 }
