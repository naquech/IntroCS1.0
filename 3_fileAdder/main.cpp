/* This program reads a file called nums.txt and writes to a file called sum.txt.
The file nums.txt contain some number of double values, one to a line. After reading
in those values (which are allowed to be negative), the program will add them
together and then write to the file sum.txt what the sum of those values is. */


#include <iostream>
#include <fstream>      //needed to use files

using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;

    double numbers, total = 0;
    int totalnums = 0;

    inputFile.open("nums.txt");     //open the input file

    if (inputFile)
    {
        while (inputFile >> numbers)
        {
            total += numbers;
            totalnums++;
            cout << numbers << endl;
        }
        cout << "File opened successfully.\n";
        inputFile.close();

        cout << "Total sum of numbers in file: " << total << endl;

        if (outputFile)
        {
            outputFile.open("sum.txt");
            outputFile << total;
            outputFile.close();

            cout << "Total saved to sum file.\n";
        }
    }

    else
        {
            cout << "Error opening file.\n";
        }

    return 0;
}
