
#include <iostream>

using namespace std;

int main() {
    int i = 9, j = 4, k = 7, n = 3;
    
    cout << i + j * k - k % n << endl;
    cout << i / n << endl;
    
    i -= j *= k /= n;
    
    cout << i << j << k << n << endl;
    
    return 0;
}

