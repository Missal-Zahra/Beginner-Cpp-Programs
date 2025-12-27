#include <iostream>

using namespace std;

const double TAX_RATE = 0.14;
const double CLOTHES_PERCENT = 0.10;
const double SUPPLIES_PERCENT = 0.01;
const double SAVINGS_PERCENT = 0.25;
const double PARENTS_MATCH = 0.50;

int main() {
    double payRate, totalHours, grossIncome, netIncome, clothesExpense, suppliesExpense;
    double savingsBonds, parentsContribution, remainingMoney;

    cout << "Enter your hourly pay rate: $";
    cin >> payRate;

    cout << "Enter the total number of hours worked per week: ";
    cin >> totalHours;

    grossIncome = payRate * totalHours * 5;
    netIncome = grossIncome * (1 - TAX_RATE);
    clothesExpense = netIncome * CLOTHES_PERCENT;
    suppliesExpense = netIncome * SUPPLIES_PERCENT;
    remainingMoney = netIncome - (clothesExpense + suppliesExpense);
    savingsBonds = remainingMoney * SAVINGS_PERCENT;
    parentsContribution = savingsBonds * PARENTS_MATCH;

    cout << "\nYour income before taxes: $" << grossIncome << endl;
    cout << "Your income after taxes: $" << netIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothesExpense << endl;
    cout << "Money spent on school supplies: $" << suppliesExpense << endl;
    cout << "Money spent on savings bonds: $" << savingsBonds << endl;
    cout << "Money your parents contributed for savings bonds: $" << parentsContribution << endl;

    return 0;
}

