/* This program asks the user to enter a (integer) temperature and then
states for each substance whether it will be solid, liquid or gas at that temperature.
Substance 	    Freezing Point 	Boiling Point
ethyl alcohol 	-173 	        172
mercury 	    -38 	        676
oxygen 	        -362 	        -306
water 	        32 	            212         */


#include <iostream>

using namespace std;

int main()
{
    int temperature;

    cout << "Please enter a (integer) temperature: " << endl;
    cin >> temperature;

/*
<-------|------------|----------|------------|-----------|----------|-----------|----------|-------->
      -362         -306       -173          -38          32        172         212        676
         _____________          _____________________________________
            Oxygen                      Ethyl Alcohol
                                            _______________________________________________
                                                             Mercury
                                                          _______________________
                                                                Water
*/

    if (temperature <= -362)
        {
        cout<<"Substance \n";
        cout<<"------------- \n";
        cout<<"Ethyl Alcohol: Solid \n";
        cout<<"Mercury: Solid \n";
        cout<<"Oxygen: Solid \n";
        cout<<"Water: Solid \n";
        }

	else if (temperature > -362 && temperature < -306)
        {
		cout<<"Substance \n";
		cout<<"------------ \n";
		cout<<"Ethyl alcohol: Solid \n";
		cout<<"Mercury: Solid \n";
		cout<<"Oxygen: Liquid \n";
		cout<<"Water: Solid \n";
		}

	else if (temperature >= -306 && temperature <= -173)
        {
		cout<<"Substance \n";
		cout<<"-------------- \n";
		cout<<"Ethyl Alcohol: Solid \n";
		cout<<"Mercury: Solid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Solid \n";
		}

	else if (temperature > -173 && temperature <= -38)
        {
		cout<<"Substance \n";
		cout<<"------------- \n";
		cout<<"Ethyl alcohol: Liquid \n";
		cout<<"Mercury: Solid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Solid \n";
		}

	else if (temperature > -38 && temperature <= 32)
        {
		cout<<"Substance \n";
		cout<<"------------- \n";
		cout<<"Ethyl alcohol: Liquid \n";
		cout<<"Mercury: Liquid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Solid \n";
		}

	else if (temperature > 32 && temperature < 172)
        {
		cout<<"Substance \n";
		cout<<"------------- \n";
		cout<<"Ethyl alcohol: Liquid \n";
		cout<<"Mercury: Liquid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Liquid \n";
		}

	else if (temperature >= 172 && temperature < 212)
        {
		cout<<"Substance \n";
		cout<<"------------ \n";
		cout<<"Ethyl alcohol: Gas \n";
		cout<<"Mercury: Liquid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Liquid \n";
		}

	else if (temperature >= 212 && temperature < 676)
        {
		cout<<"Substance \n";
		cout<<"------------ \n";
		cout<<"Ethyl alcohol: Gas \n";
		cout<<"Mercury: Liquid \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Gas \n";
		}

	else if (temperature >= 676)
        {
		cout<<"Substance \n";
		cout<<"------------ \n";
		cout<<"Ethyl alcohol: Gas \n";
		cout<<"Mercury: Gas \n";
		cout<<"Oxygen: Gas \n";
		cout<<"Water: Gas \n";
		}

    return 0;
}
