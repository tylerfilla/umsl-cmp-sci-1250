/*
 *
 * Project 4-2
 * Tyler Filla
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

void menuAreaCircle() {
    cout << "Area = pi * radius^2" << endl;
    
    double radius = -1.0;
    
    while (radius < 0) {
        cout << "Let radius = ";
        cin >> radius;
        
        if (radius < 0) {
            cout << "Invalid input" << endl;
        }
    }
    
    cout << endl;
    cout << "Area: " << M_PI*radius*radius << endl;
}

void menuAreaRectangle() {
    cout << "Area = length * width" << endl;
    
    double length = -1.0;
    double width  = -1.0;
    
    while (length < 0) {
        cout << "Let length = ";
        cin >> length;
        
        if (length < 0) {
            cout << "Invalid input" << endl;
        }
    }
    
    while (width < 0) {
        cout << "Let width = ";
        cin >> width;
        
        if (width < 0) {
            cout << "Invalid input" << endl;
        }
    }
    
    cout << endl;
    cout << "Area: " << length*width << endl;
}

void menuAreaTriangle() {
    cout << "Area = 1/2 * base * height" << endl;
    
    double base   = -1.0;
    double height = -1.0;
    
    while (base < 0) {
        cout << "Let base = ";
        cin >> base;
        
        if (base < 0) {
            cout << "Invalid input" << endl;
        }
    }
    
    while (height < 0) {
        cout << "Let height = ";
        cin >> height;
        
        if (height < 0) {
            cout << "Invalid input" << endl;
        }
    }
    
    cout << endl;
    cout << "Area: " << 0.5*base*height << endl;
}

int main() {
    cout << "Geometry Calculator" << endl;
    
    // Whether or not the program should quit
    bool shouldQuit = false;
    
    while (!shouldQuit) {
        // Present menu options
        cout << endl;
        cout << "    1. Calculate the Area of a Circle" << endl;
        cout << "    2. Calculate the Area of a Rectangle" << endl;
        cout << "    3. Calculate the Area of a Triangle" << endl;
        cout << "    4. Quit" << endl;
        
        // Display prompt
        cout << endl;
        cout << "Your selection: ";
        
        // Get user input
        int input;
        cin >> input;
        cout << endl;
        
        // Clear input buffer to prevent spillover into the next prompt
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        // Delegate menu selection to appropriate function
        switch (input) {
        case 1:
            menuAreaCircle();
            return 0;
        case 2:
            menuAreaRectangle();
            return 0;
        case 3:
            menuAreaTriangle();
            return 0;
        case 4:
            shouldQuit = true;
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "ERROR: Unrecognized menu selection \"" << input << "\"" << endl;
            break;
        }
    }
    
    return 0;
}

/*
 *
 * Output at runtime:
 *
 * Geometry Calculator
 *
 *     1. Calculate the Area of a Circle
 *     2. Calculate the Area of a Rectangle
 *     3. Calculate the Area of a Triangle
 *     4. Quit
 *
 * Your selection: [1]
 *
 * Area = pi * radius^2
 * Let radius = [10]
 *
 * Area: 314.159
 * 
 * [new instance]
 * 
 * Geometry Calculator
 *
 *     1. Calculate the Area of a Circle
 *     2. Calculate the Area of a Rectangle
 *     3. Calculate the Area of a Triangle
 *     4. Quit
 *
 * Your selection: [5]
 *
 * ERROR: Unrecognized menu selection "5"
 *
 *     1. Calculate the Area of a Circle
 *     2. Calculate the Area of a Rectangle
 *     3. Calculate the Area of a Triangle
 *     4. Quit
 *
 * Your selection: [4]
 *
 * Quitting...
 *
 */
