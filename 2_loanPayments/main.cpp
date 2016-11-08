/*The monthly payment on a loan may be calculated by the following formula:
P = {[R*(1+R)^N] / [(1+R)^N -1]} *L
R: monthly interest rate. N: number of payments. L: amount of the loan.
This program asks for these values and displays a report similar to the following:
Loan Amount:            $ 10000.00
Monthly Interest Rate:       1.00%
Number of Payments:             36
Monthly Payment:        $   332.14
Amount Paid Back:       $ 11957.15
Interest Paid:          $  1957.15    */


# include <iostream>
# include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double loanAmount, monthlyInterest, monthlyPayment, interest, paidBack, interestPaid, num, den;
    int numberPayments;

    cout << "Amount of the loan: ";
    cin >> loanAmount;
    cout << "Number of payments: ";
    cin >> numberPayments;
    cout << "Monthly interest rate: ";
    cin >> monthlyInterest;

    interest = monthlyInterest / 100;
    num = (interest * pow (1 + interest , numberPayments));
    den = pow (1 + interest, numberPayments) - 1;
    monthlyPayment = (num / den) * loanAmount;
    paidBack = monthlyPayment * numberPayments;
    interestPaid = paidBack - loanAmount;

    cout << fixed << showpoint << setprecision (2);

    cout << left << setw (25) << "Loan Amount:" << right << setw (1) << "$" << setw (10) << loanAmount << endl;
    cout << left << setw (25) << "Monthly Interest Rate:" << right << setw (1) << " " << setw (10) << monthlyInterest << "%" << endl;
    cout << left << setw (25) << "Number of Payments:" << right << setw (1) << " " << setw (10) << numberPayments << endl;
    cout << left << setw (25) << "Monthly Payment:" << right << setw (1) << "$" << setw (10) << monthlyPayment << endl;
    cout << left << setw (25) << "Amount Paid Back: " << right << setw (1) << "$" << setw (10) << paidBack << endl;
    cout << left << setw (25) << "Interest Paid: " << right << setw (1) << "$" << setw (10) << interestPaid << endl;

    return 0;
}
