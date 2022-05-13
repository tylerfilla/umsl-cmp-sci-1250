
#include <iostream>

using namespace std;


int main() {
    for (int i = 100; i >= 2; i--) {
        if (i%2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    for (int i = 99; i >= 1; i--) {
        if (i%2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
