/*
 *
 * Project 2
 * Tyler Filla
 *
 */

#include <iostream>

#define SHARE_COUNT       750
#define SHARE_PRICE       35.0
#define BROKER_COMMISSION 0.02

using namespace std;

int main() {
    double subtotal = SHARE_COUNT*SHARE_PRICE;
    
    cout << "The amount paid for the stock alone is ";
    cout << subtotal << " dollars." << endl;
    
    cout << "The amount of commission is ";
    cout << BROKER_COMMISSION*subtotal << " dollars." << endl;
    
    cout << "The total amount paid is ";
    cout << (1 + BROKER_COMMISSION)*subtotal << " dollars." << endl;
}

/*
 *
 * Output at runtime:
 *
 * The amount paid for the stock alone is 26250 dollars.
 * The amount of commission is 525 dollars.
 * The total amount paid is 26775 dollars.
 *
 */ 
