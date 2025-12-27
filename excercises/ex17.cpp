#include <iostream>

using namespace std;

const double CARTON_CAPACITY = 3.78;

int main() {
    double totalMilk, costPerLiter, profitPerCarton, productionCost, profit;
    int cartonsNeeded;

    cout << "Enter the total amount of milk produced in liters: ";
    cin >> totalMilk;

    cout << "Enter the cost of producing one liter of milk: $";
    cin >> costPerLiter;

    cout << "Enter the profit per carton of milk: $";
    cin >> profitPerCarton;

    cartonsNeeded = static_cast<int>(totalMilk / CARTON_CAPACITY + 0.5);
    productionCost = totalMilk * costPerLiter;
    profit = cartonsNeeded * profitPerCarton;

    cout << "\nNumber of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Total cost of producing milk: $" << productionCost << endl;
    cout << "Total profit from milk production: $" << profit << endl;

    return 0;
}

