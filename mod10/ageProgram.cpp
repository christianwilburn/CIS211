#include <iostream>
#include <string>

using namespace std;

// Structure to hold family member data
struct FamilyMember {
    string name;
    string birthCity;
    int birthYr;
};

int main() {
    const int NUM_FAMILY_MEMBERS = 5;
    FamilyMember* familyMem = new FamilyMember[NUM_FAMILY_MEMBERS]; // array of FamilyMember structs

    // Prompt the user to input data for family members
    cout << "Enter data for each family member:\n";
    for (int i = 0; i < NUM_FAMILY_MEMBERS; ++i) {
        cout << "\nFamily Member " << i + 1 << ":\n";
        
        // Input name
        cout << "Enter name: ";
        getline(cin, familyMem[i].name);

        // Input birth city
        cout << "Enter birth city: ";
        getline(cin, familyMem[i].birthCity);

        // Input birth year
        while (true) {
            cout << "Enter birth year (in the format 19XX or 20XX): ";
            cin >> familyMem[i].birthYr;
            if (familyMem[i].birthYr >= 1900 && familyMem[i].birthYr <= 2018) {
                break;
            } else {
                cout << "Invalid year. Please enter a year between 1900 and 2018.\n";
            }
        }
        cin.ignore(); // Clear input buffer
    }

    // Output data in a formatted table
    cout << "\n\nFamily Member Data:\n";
    cout << "---------------------------------------------\n";
    cout << "Name\t\tBirth City\tBirth Year\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < NUM_FAMILY_MEMBERS; ++i) {
        cout << familyMem[i].name << "\t\t" << familyMem[i].birthCity << "\t\t" << familyMem[i].birthYr << endl;
    }

    // Free memory (clear out)
    delete[] familyMem;

    return 0;
}