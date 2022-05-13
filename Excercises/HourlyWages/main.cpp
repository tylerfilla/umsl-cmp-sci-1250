#include <iostream>

using namespace std;

int main() {
    double regularWages,
           basePayRate,
           regularHours = 40.0,
           overtimeWages,
           overtimePayRate = 27.78,
           overtimeHours = 10,
           totalWages;
    
    regularWages = basePayRate * regularHours;
    
    overtimeWages = overtimePayRate * overtimeHours;
    
    totalWages = regularWages + overtimeWages;
    
    cout << "Wages for this week are $" << totalWages << endl;
    cout << basePayRate << endl;
    
    return 0;
}
