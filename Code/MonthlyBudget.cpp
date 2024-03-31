// MonthlyBudget.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// define the MonthlyBudget structure
struct MonthlyBudget {
    double housing;
    double utility;
    double expenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothes;
    double misc;
};

// function to prompt user to input actual spent amts
void inputActual(MonthlyBudget& actual) {
    cout << "Enter actual actual for each category:" << endl;
    cout << "Housing: ";
    cin >> actual.housing;
    cout << "Utilities, Internet & Phone: ";
    cin >> actual.utility;
    cout << "Household actual: ";
    cin >> actual.expenses;
    cout << "Transportation: ";
    cin >> actual.transportation;
    cout << "Food: ";
    cin >> actual.food;
    cout << "Medical: ";
    cin >> actual.medical;
    cout << "Insurance: ";
    cin >> actual.insurance;
    cout << "Entertainment: ";
    cin >> actual.entertainment;
    cout << "Clothing: ";
    cin >> actual.clothes;
    cout << "Miscellaneous: ";
    cin >> actual.misc;
}

// function to calculate and display budget report
void displayBudgetReport(const MonthlyBudget& budget, const MonthlyBudget& actual) {
    cout << "\nBudget Report:" << endl;
    cout << setw(25) << left << "Category" << setw(15) << right << "Budgeted" << setw(15) << "Actual" << setw(15) << "Difference" << endl;
    cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;

    double totalBudget = 0, totalActual = 0;

    // display and calculate for each category
    auto showCalculation = [&](const string& category, double budgeted, double actual) {
        double difference = actual - budgeted;
        totalBudget += budgeted;
        totalActual += actual;
        cout << setw(25) << left << category << setw(15) << right << fixed << setprecision(2) << budgeted
            << setw(15) << actual << setw(15) << difference << endl;
        };

    // display and calculate for each category
    showCalculation("Housing", budget.housing, actual.housing);
    showCalculation("Utilities, Internet & Phone", budget.utility, actual.utility);
    showCalculation("Household actual", budget.expenses, actual.expenses);
    showCalculation("Transportation", budget.transportation, actual.transportation);
    showCalculation("Food", budget.food, actual.food);
    showCalculation("Medical", budget.medical, actual.medical);
    showCalculation("Insurance", budget.insurance, actual.insurance);
    showCalculation("Entertainment", budget.entertainment, actual.entertainment);
    showCalculation("Clothing", budget.clothes, actual.clothes);
    showCalculation("Miscellaneous", budget.misc, actual.misc);

    // display total difference
    cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;
    double budgetDiff = totalActual - totalBudget;
    cout << setw(25) << left << "Total" << setw(15) << right << fixed << setprecision(2) << totalBudget
        << setw(15) << totalActual << setw(15) << budgetDiff << endl;
}

int main() {
    MonthlyBudget budget = { 1000.00, 200.00, 63.00, 52.00, 250.00, 40.00, 125.00, 130.00, 80.00, 50.00 };
    MonthlyBudget actual;

    // input actual actual
    inputActual(actual);

    // display budget report
    displayBudgetReport(budget, actual);

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
