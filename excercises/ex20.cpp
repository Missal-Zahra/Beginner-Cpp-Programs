#include <iostream>

using namespace std;

int main() {
    double fixedCommission, commissionPercentage, carCost, minAddition, maxAddition;
    double minSellingPrice, maxSellingPrice, minCommission, maxCommission;

    cout << "Enter the salesperson's fixed commission: $";
    cin >> fixedCommission;

    cout << "Enter the commission percentage: ";
    cin >> commissionPercentage;

    cout << "Enter the purchasing cost of the car: $";
    cin >> carCost;

    cout << "Enter the minimum amount to be added to the purchasing cost: $";
    cin >> minAddition;

    cout << "Enter the maximum amount to be added to the purchasing cost: $";
    cin >> maxAddition;

    minSellingPrice = carCost + minAddition;
    maxSellingPrice = carCost + maxAddition;

    minCommission = fixedCommission + (commissionPercentage / 100) * (minSellingPrice - carCost);
    maxCommission = fixedCommission + (commissionPercentage / 100) * (maxSellingPrice - carCost);

    cout << "\nMinimum selling price of the car: $" << minSellingPrice << endl;
    cout << "Maximum selling price of the car: $" << maxSellingPrice << endl;
    cout << "Minimum commission the salesperson can earn: $" << minCommission << endl;
    cout << "Maximum commission the salesperson can earn: $" << maxCommission << endl;

    return 0;
}

