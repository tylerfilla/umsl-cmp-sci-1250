
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n = -77;
    
    cout.width(7);
    cout << internal << n << '\n';
    cout.width(7);
    cout << left << n << '\n';
    cout.width(7);
    cout << right << n << "\n\n";
    
    cout << setw(7) << internal << n << '\n';
    cout << setw(7) << left << n << '\n';
    cout << setw(7) << right << n << '\n';
    
    return 0;
}
