/*
 *
 * Project 5-1
 * Tyler Filla
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>

#define PRICE_BASE      2500.0
#define INCREASE_AMOUNT 0.04
#define INCREASE_PERIOD 6

using namespace std;

int main() {
    cout << setprecision(2) << fixed;
    cout << "Initial fee for this year: $" << PRICE_BASE << endl;
    
    for (int year = 1; year <= INCREASE_PERIOD; year++) {
        cout << "Projected fee for year " << year << ":  $" << PRICE_BASE*pow(1.0 + INCREASE_AMOUNT, year) << endl;
    }
    
    return 0;
}

/*
 *
 * Output at runtime:
 *
 * Initial fee for this year: $2500.00
 * Projected fee for year 1:  $2600.00
 * Projected fee for year 2:  $2704.00
 * Projected fee for year 3:  $2812.16
 * Projected fee for year 4:  $2924.65
 * Projected fee for year 5:  $3041.63
 * Projected fee for year 6:  $3163.30
 *
 */
