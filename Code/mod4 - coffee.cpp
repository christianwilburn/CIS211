// mod4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float quantity, discount;
    float price = 12.99;
    float total;
    float percentage;

    // Have the user input the number of pounds they want to buy

    cout << "How many pounds of coffee do you want to buy?\n";

    cin >> quantity;

    //Determine discount percentage based on quantity

    if (quantity >= 30)
    {
        discount = 20;
    }
    else if (quantity >= 20)
    {
        discount = 15;
    }
    else if (quantity >= 10)
    {
        discount = 10;
    }
    else if (quantity >= 5)
    {
        discount = 5;
    }
    else if (quantity < 5) {
        cout << "\nNo discount apllied.\nBuy more than 5 for a discount\n";
    }
    else {
        discount = 0;
        cout << "Invalid quantity";
    }

    // calculate discount and total including discount

    percentage = (discount / 100);

    total = (quantity * price) - (percentage * price * quantity);

    // display discount and total

    
    cout << "Your discount is " << discount << "%\n";

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Your total price is: $" << total;

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
