/*
* Leah Clemens
* Professor Marcello
* 16 April 2023
*/
#ifndef REPOS_GROCERYTRACKING_GROCERYTRACKER_H
#define REPOS_GROCERYTRACKING_GROCERYTRACKER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class GroceryTracker {
public:
    void inputFile();           // Reads in grocery items from a file and populate a vector
    void calcFrequency();       // Calculates the frequency of item occurrence in vector and populates a map and stores the data in a .dat file
    void lookupItem();          // Searches map for grocery item and output frequency
    void printList();           // Prints grocery map of items and their frequencies
    void printHistogram();      // Prints grocery map of items and their frequency counts as '*'
private:
    vector<string> grocery_list;            // Vector of grocery items in order of purchase
    map<string, int> grocery_frequencies;   // Map of grocery items and frequencies 
};

#endif // REPOS_GROCERYTRACKING_GROCERYTRACKER_H
