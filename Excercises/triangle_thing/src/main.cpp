
#include <iostream>

using namespace std;

void stage1() {
    for (int i = 9; i > 1; i--) {
        if (i%2 == 0) {
            continue;
        }
        
        cout << string(i, '*') << endl;
    }
}

void stage2() {
    for (int i = 1; i <= 9; i++) {
        if (i%2 == 0) {
            continue;
        }
        
        cout << string(i, '*') << endl;
    }
}

int main() {
    stage1();
    stage2();
    
    return 0;
}
