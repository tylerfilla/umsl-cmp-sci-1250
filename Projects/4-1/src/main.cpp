/*
 *
 * Project 4
 * Tyler Filla
 *
 */

#include <iostream>

using namespace std;

int main() {
    double value;
    string unit;
    
    // Prompt for and accept user input
    cout << "Please input a time in seconds: ";
    cin >> value;
    
    // Convert to largest reasonable unit
    if (value < 60.0) {
        unit = "second";
    } else if ((value /= 60.0) >= 1.0 && value < 60.0) {
        unit = "minute";
    } else if ((value /= 60.0) >= 1.0 && value < 24.0) {
        unit = "hour";
    } else if ((value /= 24.0) >= 1.0) {
        unit = "day";
    }
    unit += value == 1.0 ? '\0' : 's';
    
    // Present results
    cout << "Equivalent time: " << value << " " << unit << endl;
    
    return 0;
}

/*
 *
 * Output at runtime:
 *
 * Please input a time in seconds: [e.g. 86401]
 * Equivalent time: 1.00001 days
 *
 */
