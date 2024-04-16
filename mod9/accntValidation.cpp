// acctValidation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;

class acctValidate
{
private:
    int acctNums[18] = { 8149420, 5333174, 3080098,
    6755963, 9526981, 4449539, 9387197, 5104726,
    2931356, 4282637, 1750219, 6086650, 3164838,
    2419590, 4578589, 9718904, 6749941, 2545408 };

    // Function for linear search
    bool linSearch(int key) {
        for (int i = 0; i < 17; ++i) {
            if (acctNums[i] == key) {
                return true;
            }
        }
        return false;
    }

    // Function for bubble sort
    void bubbleSort() {
        for (int i = 0; i < 17 - 1; ++i) {
            for (int j = 0; j < 17 - i - 1; ++j) {
                if (acctNums[j] > acctNums[j + 1]) {
                    swap(acctNums[j], acctNums[j + 1]);
                }
            }
        }
    }

    // Function for binary search
    bool binSearch(int key) {
        int left = 0;
        int right = 17 - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (acctNums[mid] == key) {
                return true;
            }
            else if (acctNums[mid] < key) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return false;
    }

public:
    // Function to validate account number using linear search
    void linValidate(int searchNum) {
        if (linSearch(searchNum)) {
            cout << "Account number is valid." << endl;
        }
        else {
            cout << "Account number is invalid." << endl;
        }
    }

    // Function to validate account number using bubble sort and binary search
    void binValidate(int searchNum) {
        bubbleSort(); // Sort array using bubble sort
        if (binSearch(searchNum)) {
            cout << "Account number is valid." << endl;
        }
        else {
            cout << "Account number is invalid." << endl;
        }
    }
};

int main() {
    acctValidate
        validator;

    int userNumber;
    cout << "Enter a charge account number: ";
    cin >> userNumber;

    // Validate using linear search
    validator.linValidate(userNumber);

    // Validate using bubble sort and binary search
    validator.binValidate(userNumber);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
