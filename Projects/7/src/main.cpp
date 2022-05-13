/*
 *
 * Project 7
 * Tyler Filla
 *
 */

#include <iostream>
#include <fstream>
#include <iomanip>

#define FILE_INPUT "p7.dat"
#define FILE_OUTPUT "outfile"

#define COUNT_STUDENTS 7
#define COUNT_TESTS 3

using namespace std;

int main() {
    ifstream fileIn;
    ofstream fileOut;
    
    fileIn.open(FILE_INPUT);
    fileOut.open(FILE_OUTPUT);
    
    double avgStudents[COUNT_STUDENTS];
    double avgTests[COUNT_TESTS];
    
    memset(avgStudents, 0, COUNT_STUDENTS*sizeof(double));
    memset(avgTests, 0, COUNT_TESTS*sizeof(double));
    
    double highScore = 0;
    int numAs = 0;
    
    for (int student = 0; student < COUNT_STUDENTS; student++) {
        for (int test = 0; test < COUNT_TESTS; test++) {
            double score;
            fileIn >> score;
            
            // Average score into per-student array
            avgStudents[student] += score/COUNT_TESTS;
            
            // Average score into per-test array
            avgTests[test] += score/COUNT_STUDENTS;
            
            // Check for high score
            if (score > highScore) {
                highScore = score;
            }
            
            // Check for A
            if (score >= 90) {
                numAs++;
            }
        }
    }
        
    // Averages display with 2 decimal places, fixed
    cout << fixed << setprecision(2);
    fileOut << fixed << setprecision(2);
    
    // Print per-student averages
    for (int i = 0; i < COUNT_STUDENTS; i++) {
        cout << avgStudents[i] << " ";
        fileOut << avgStudents[i] << " ";
    }
    cout << endl;
    fileOut << endl;
    
    // Print per-test averages
    for (int i = 0; i < COUNT_TESTS; i++) {
        cout << avgTests[i] << " ";
        fileOut << avgTests[i] << " ";
    }
    cout << endl;
    fileOut << endl;
    
    // Reset-ish formatting
    cout << setprecision(0);
    fileOut << setprecision(0);
    
    // Print high score
    cout << highScore << endl;
    fileOut << highScore << endl;
    
    // Print number of As
    cout << numAs << endl;
    fileOut << numAs << endl;
    
    fileIn.close();
    fileOut.close();
    
    return 0;
}

/*
 *
 * Typical output at runtime with random data:
 *
 * 60.00 56.67 63.33 49.33 69.67 56.33 44.33
 * 73.43 38.86 59.00
 * 98
 * 3
 *
 */
