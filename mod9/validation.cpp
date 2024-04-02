#include <iostream>
#include <algorithm>
using namespace std;

// Function to perform linear search
bool linSearch(const int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

// Function to perform binary search
bool binSearch(const int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return true;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 18;
    int acctNums[size] = {8149420, 5333174, 3080098, 6755963, 9526981, 4449539, 9387197, 5104726, 2931356, 4282637, 1750219, 6086650, 3164838, 2419590, 4578589, 9718904, 6749941, 2545408};

    int acctInput;
    cout << "Enter a charge account number: ";
    cin >> acctInput;

    // Linear search
    if (linSearch(acctNums, size, acctInput)) {
        cout << "Account number is valid (Linear search)." << endl;
    } else {
        cout << "Account number is invalid (Linear search)." << endl;
    }

    // Bubble sort
    bubbleSort(acctNums, size);

    // Binary search
    if (binSearch(acctNums, size, acctInput)) {
        cout << "Account number is valid (Binary search)." << endl;
    } else {
        cout << "Account number is invalid (Binary search)." << endl;
    }

    return 0;
}