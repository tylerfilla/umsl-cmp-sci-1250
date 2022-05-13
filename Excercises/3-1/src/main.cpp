#include <iostream>

using namespace std;

int main() {
    int a       = 3;
    short int b = a;
    
    cout << "The size of \"a\" is " << sizeof(a) << " bytes";
    cout << " and the size of \"b\" is " << sizeof(b) << " bytes" << endl;
    
    double d = 0.1234;
    float  f = d;
    
    cout << "The size of \"d\" is " << sizeof(d) << " bytes";
    cout << " and the size of \"f\" is " << sizeof(f) << " bytes" << endl;
    
    int num;
    float x;
    char c;
    
    cout << "The value of num is: " << num << endl;
    cout << "Give a float, and integer, and a char value, respectively: ";
    cin >> x >> num >> c;
    cout << x << " " << num << " " << c << endl;
    
    cout << 6 - 3*2 + 7 - 1 << endl;
    cout << 6 - 5%3*3  + 7*2 - 3 << endl;
    
    return 0;
}

/**
  *
  * Output at runtime:
  *
  * The size of "a" is 4 bytes and the size of "b" is 2 bytes
  * The size of "d" is 8 bytes and the size of "f" is 4 bytes
  * The value of num is: 0
  * Give a float, and integer, and a char value, respectively: 3 4.8 m
  * 3 4 .
  * 6
  * 11
  *
  */
