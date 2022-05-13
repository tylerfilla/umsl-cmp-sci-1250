
/*
 *
 * Project 3
 * Tyler Filla
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    string ownerName;
    
    double principal;
    double interestRate;
    int    compoundTimes;
    
    /* Acquire data from user */
    
    cout << "Input account owner's full name: ";
    getline(cin, ownerName);
    
    cout << "Input interest rate (%): ";
    cin >> interestRate;
    
    cout << "Input number of times compounded: ";
    cin >> compoundTimes;
    
    cout << "Input principal ($): ";
    cin >> principal;
    
    /* Calculate and present results */
    
    double amount = principal*pow(1.0 + interestRate/(100.0*compoundTimes), compoundTimes);
    
    cout << endl << setprecision(2)           << fixed << setw(7);
    cout << left << "Interest Rate:         " << right << setw(7) << interestRate  << "%" << endl;
    cout << left << "Times Compounded:      " << right << setw(7) << compoundTimes        << endl;
    cout << left << "Principal:           $ " << right << setw(7) << principal            << endl;
    cout << left << "Interest:            $ " << right << setw(7) << (amount - principal) << endl;
    cout << left << "Amount in Savings:   $ " << right << setw(7) << amount               << endl;
    
    cout << endl;
    cout << ownerName << " has a total amount of $ " << amount << " in the savings account." << endl;
    
    return 0;
}

/*
 *
 * Output at runtime:
 *
 * Input account owner's full name: [ownerName]
 * Input interest rate (%): [interestRate]
 * Input number of times compounded: [compoundTimes]
 * Input principal ($): [principal]
 *
 * Interest Rate:         [interestRate]%
 * Times Compounded:      [compoundTimes]
 * Principal:           $ [principal]
 * Interest:            $ [amount - principal]
 * Amount in Savings:   $ [amount]
 *
 * [ownerName] has a total amount of $ [amount] in the savings account.
 *
 */

