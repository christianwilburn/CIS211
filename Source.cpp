#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float item1, item2, item3, item4, item5, item6;
    

    cout << "Christian's Market\n";

    // items input by user

    cout << "What was the price for eggs?\n";
    cin >> item1;
    cout << "What was the price for chips?\n";
    cin >> item2;
    cout << "What was the price for oranges?\n";
    cin >> item3;
    cout << "What was the price for cheese?\n";
    cin >> item4;
    cout << "What was the price for popcorn?\n";
    cin >> item5;
    cout << "What was the price for juice?\n";
    cin >> item6;

    // calculate sum of input items

    float sum = item1 + item2 + item3 + item4 + item5 + item6;

    // calculate tax and add to total

    float tax = sum * (6.00 / 100);
    float  shoppingbill = sum + tax;

    // output with 2 decimal places

    cout << "Your total shopping bill is \n";
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << shoppingbill;

	return 0;
}