#include <iostream>
#include <algorithm>

using namespace std;

class acctValidate
 {
private:
    int acctNums[18] = {8149420, 5333174, 3080098, 
    6755963, 9526981, 4449539, 9387197, 5104726, 
    2931356, 4282637, 1750219, 6086650, 3164838, 
    2419590, 4578589, 9718904, 6749941, 2545408};

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
            } else if (acctNums[mid] < key) {
                left = mid + 1;
            } else {
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
        } else {
            cout << "Account number is invalid." << endl;
        }
    }

    // Function to validate account number using bubble sort and binary search
    void binValidate(int searchNum) {
        bubbleSort(); // Sort array using bubble sort
        if (binSearch(searchNum)) {
            cout << "Account number is valid." << endl;
        } else {
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