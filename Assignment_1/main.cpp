#include <iostream>
#include <string>

//a simple example program

using namespace std;

int main()
{
    string faveAnimal;
    cout << "Please enter your favorite animal: " << std::endl;
    // std::cin >> faveAnimal;
    getline (cin, faveAnimal);
    cout << "Your favorite animal is the: " << faveAnimal;
    cout << "." << std::endl;

    return 0;
}
