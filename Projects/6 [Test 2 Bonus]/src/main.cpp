/*
 *
 * Chapter 6
 * Test 2 Bonus Project
 *
 */

#include <iostream>
#include <fstream>

#define FILE_LOCATION "names.txt"

using namespace std;

void sortNames(string* names, int count) {
    for (int i = 0; i < count; i++) {
        bool swapped = false;
        
        for (int j = i + 1; j < count; j++) {
            if (names[i].compare(names[j]) > 0) {
                string cloneA = string(names[i]);
                string cloneB = string(names[j]);
                
                names[i] = cloneB;
                names[j] = cloneA;
                
                swapped = true;
                
                break;
            }
        }
        
        if (swapped) {
            i--;
        }
    }
}

bool writeNames(string* names, int count) {
    ofstream file;
    file.open(FILE_LOCATION);
    
    if (!file) {
        cout << "ERROR: Could not open file." << endl;
        return false;
    }
    
    for (int i = 0; i < count; i++) {
        file << names[i] << endl;
    }
    
    file.close();
    
    return true;
}

int main() {
    int nameCount = -1;
    while (nameCount == -1 || !(nameCount >= 1 && nameCount <= 5)) {
        cout << "Input number of names (from 1 to 5): ";
        cin >> nameCount;
    }
    cin.get();
    
    cout << "Enter names in Last First [Middle] format." << endl;
    
    string names[nameCount];
    
    for (int i = 0; i < nameCount; i++) {
        cout << (i + 1) << ". ";
        getline(cin, names[i]);
    }
    
    sortNames(names, nameCount);
    
    if (writeNames(names, nameCount)) {
        cout << "Names alphabetized and written to the file \"" FILE_LOCATION "\"" << endl;
        return 0;
    } else {
        cout << "An error occurred while writing to the file." << endl;
        return 1;
    }
}
