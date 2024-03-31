// Temperature.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// function to do temp conversion
double Fahrenheit(double celsius) {
    return celsius * 1.8 + 32; 
}

int main() {
    double celsius, fahrenheit;

    cout << "This program will convert celsius to fahrenheit.\n";

    // user inputs temp in celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // convert user input remperature
    fahrenheit = Fahrenheit(celsius);

    // display the converted temperature
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

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
