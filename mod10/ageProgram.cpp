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
        string birthYrStr;
        int birthYr;
        bool validYr = false;
        while (!validYr) {
            cout << "Enter birth year (in the format 19XX or 20XX): ";
            getline(cin, birthYrStr);
            if (birthYrStr.size() == 4 && birthYrStr[0] == '1' && (birthYrStr[1] == '9' || birthYrStr[1] == '0')) {
                birthYr = stoi(birthYrStr.substr(0, 2));
                validYr = true;
            } else if (birthYrStr.size() == 4 && birthYrStr[0] == '2' && birthYrStr[1] == '0') {
                birthYr = stoi(birthYrStr.substr(0, 2));
                validYr = true;
            } else {
                cout << "Invalid year format. Please enter a valid year.\n";
            }
        }
        familyMem[i].birthYr = birthYr;
    }

    // Output data in a formatted table
    cout << "\n\nFamily Member Data:\n";
    cout << "----------------------------------------\n";
    cout << "Name\t\tBirth City\tBirth Year\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < NUM_FAMILY_MEMBERS; ++i) {
        cout << familyMem[i].name << "\t\t" << familyMem[i].birthCity << "\t\t" << "19" << familyMem[i].birthYr << endl;
    }

    // Free memory (clear out)
    delete[] familyMem;

    return 0;
}