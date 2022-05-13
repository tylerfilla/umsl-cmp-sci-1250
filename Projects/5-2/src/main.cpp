/*
 *
 * Project 5-2
 * Tyler Filla
 *
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << "Input filename: ";
    string inputFilename;
    cin >> inputFilename;
    
    ifstream inputFile;
    inputFile.open(inputFilename.c_str());
    
    if (!inputFile) {
        cout << "Error opening file \"" << inputFilename << "\"" << endl;
        return 0;
    }
    
    int count;
    int sum;
    
    int number;
    while ((inputFile >> number)) {
        count++;
        sum += number;
    }
    
    cout << "Count:   " << count << endl;
    cout << "Sum:     " << sum << endl;
    cout << "Average: " << ((double) sum/(double) count) << endl;
    
    inputFile.close();
}

/*
 *
 * Output at runtime:
 *
 * Input filename: Random.txt
 * Count:   200
 * Sum:     105527
 * Average: 527.635
 *
 */
