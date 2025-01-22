#include<iostream>
using namespace std;

// Function to print the name a specific number of times
void printRepeatedName(const string& name, int times) {
    for (int i = 0; i < times; i++) {
        cout << name << endl;
    }
}

// Function to print "Pak" a specific number of times
void printPak(int times) {
    for (int i = 0; i < times; i++) {
        cout << "Pak" << endl;
    }
}

int main() {
    string myName = "YourName";      // Replace with your name
    string fathersName = "FathersName";  // Replace with your father's name
    string cousinName = "CousinName";  // Replace with your cousin's name
    
    // Step 1: Print your name
    printRepeatedName(myName, 1);  // Print your name once

    // Step 2: Print "Pak" 10 times
    printPak(10);

    // Step 3: Print your father's name
    printRepeatedName(fathersName, 1);  // Print father's name once

    // Step 4: Print "Pak" 20 times
    printPak(20);

    // Step 5: Print your cousin's name
    printRepeatedName(cousinName, 1);  // Print cousin's name once

    // Step 6: Print "Pak" 30 times
    printPak(30);

    return 0;
}
