/*
* Leah Clemens
* Professor Marcello
* 16 April 2023
*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "GroceryTracker.h"
using namespace std;

int main() {
    int choice;
    GroceryTracker tracker;
    string item;
    tracker.inputFile();                        // Function call to input groceries and populate vector
    
    try {       
        tracker.calcFrequency();                // Function call to calculate frequency of items and populate map
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;  // Prints error message for exeptions thrown in calcFrequency function
        return 1;
    }

    // Loop to output menu and call corresponding menu option using input from user
    do {
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Look up an item" << endl;
        cout << "2. Print the frequency of all items" << endl;
        cout << "3. Print a histogram of item frequencies" << endl;
        cout << "4. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice: ";
        try {                                       // Try/catch to avoid infinite loop
            cin >> choice;
            if (cin.fail()) {                       // If returns true, exception is thrown
                throw "Invalid input. Please enter a number 1-4.";
            }
            switch (choice) {
            case 1:
                tracker.lookupItem();
                break;
            case 2:
                tracker.printList();
                break;
            case 3:
                tracker.printHistogram();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
            }
        }
        catch (const char* error) {                 // Catches thrown exception and message
            cout << error << endl;                  // Outputs error message
            cin.clear();                            // Clears input stream
            cin.ignore(99, '\n');                   // Ignores any remaining input
        }
    } while (choice != 4);

    return 0;
}
