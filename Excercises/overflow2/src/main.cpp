
#include <iostream>
#include <limits>

using namespace std;

int main() {
    short a = 17000;
    short b = 3;
    short c;
    
    cout << sizeof(short) << " bytes for short integer type." << endl;
    
    int d = 17000;
    int e = 3;
    int f;
    
    cout << sizeof(int) << " bytes for int type." << endl;
    
    c = a*b;
    f = d*e;
    
    cout << c << " versus " << f << endl;
    
    if (a*b > numeric_limits<short>::max()) {
        cout << "Overflow in short integer type" << endl;
    }
    
    if (d*e > numeric_limits<int>::max()) {
        cout << "Overflow in int type" << endl;
    }
    
    cout << "Maximum short integer value = " << numeric_limits<short>::max() << endl;
    cout << "Maximum int value = " << numeric_limits<int>::max() << endl;
    
    return 0;
}
