/*
* Leah Clemens
* Professor Marcello
* 16 April 2023
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "GroceryTracker.h"
using namespace std;

// Function to read in grocery items from a file and populate a vector
void GroceryTracker::inputFile() {
    ifstream inFile;
    string item;

    inFile.open("input_items.txt");

    if (!inFile.is_open()) {                              // Checks file is correctly opened
        cout << "Could not open file input_items.txt." << endl;
    }

    for (int i = 0; inFile >> item; i++) {               // Iterates through each line
        if (!inFile.fail()) {
            grocery_list.push_back(item);                // Populates vector with item on current line
        }
    }

    if (!inFile.eof()) {                                 // If program doesn't reach the end of the file
        cout << "Error: end of file never reached." << endl;
        exit(EXIT_FAILURE);                              // Prints error message and exits program
    }
    inFile.close();
}

// Function calculates the frequency of item occurrence in vector and populates 
// a map and stores the data in a .dat file
void GroceryTracker::calcFrequency() {
    string currItem;
    ofstream outLine;
    outLine.open("frequency.dat");
    if (!outLine.is_open()) {                           // Checks if file was correctly opened
        throw runtime_error("Could not open file: frequency.dat");
    }

    for (int i = 0; i < grocery_list.size(); ++i) {     // Iterates through grocery purchases
        currItem = grocery_list.at(i);
        if (grocery_frequencies.find(currItem) == grocery_frequencies.end()) {
            grocery_frequencies[currItem] = 1;          // Frequency of item is one if only one ocurrence is found
        }
        else {
            grocery_frequencies[currItem]++;            // Increments frequency if more than one ocurrence is found
        }
    }

    // Iterates through map, accessing key-value pairs
    for (auto it = grocery_frequencies.begin(); it != grocery_frequencies.end(); ++it) {
        outLine << it->first << endl;           // Retrieves and stores the key
        outLine << it->second << endl;          // Retrieves and stores the value
    }
    if (!outLine.good()) {
        throw runtime_error("Error writing to file: frequency.dat");
    }
    outLine.close();
} 

// Function for searching map for grocery item and output frequency
void GroceryTracker::lookupItem() {
    string item;
    bool needInput = true;

    while (needInput && item != "q") {                              // Give user option to keep trying or exit
        cout << "Enter item name or enter 'q' to exit: ";
        cin >> item;
        if (item == "q") {
            needInput = false;
        }
        try {
            int frequency = grocery_frequencies.at(item);           // Compare user input and store frequency value
            cout << "The frequency of " << item << " is " << frequency << endl;
            needInput = false;
        }
        catch (const out_of_range& e) {                            // Catches exception if user input doesn't match 
            cerr << "Error: " << item << " not found in map." << endl;
            needInput = true;
        }
    }
}

// Function prints grocery map of items and their frequencies
void GroceryTracker::printList() {
    cout << "Grocery Item\tFrequency" << endl;
    // Loop iterates through grocery items (keys) 
    for (auto it = grocery_frequencies.begin(); it != grocery_frequencies.end(); ++it) {        
        cout << left << setw(19) << setfill(' ');                   // Format output
        cout << it->first << " " << it->second << endl;             // Print item (key) and frequency (value)
    }
}

// Function prints grocery map of items and their frequency counts as '*'
void GroceryTracker::printHistogram() {
    cout << "Grocery Item\tHistogram" << endl;
    // Loop iterates through grocery items (keys)
    for (auto it = grocery_frequencies.begin(); it != grocery_frequencies.end(); ++it) {
        cout << left << setw(19) << setfill(' ');                   // Format output
        cout << it->first;                                          // Output item (key)
        // Iterate through frequency of each item
        for (int i = 0; i < it->second; i++) {                      
            cout << "*";                                            // Print '*' for each incrementation
        }
        cout << endl;
    }
}