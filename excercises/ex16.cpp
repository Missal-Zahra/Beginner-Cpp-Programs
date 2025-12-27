#include <iostream>

using namespace std;

const double CARTON_CAPACITY = 3.78;  // Liters per carton
const double COST_PER_LITER = 0.38;   // Cost of producing 1 liter of milk
const double PROFIT_PER_CARTON = 0.27; 

int main() {
    double totalMilk, productionCost, profit;
    int cartonsNeeded;

   
    cout << "Enter the total amount of milk produced in liters: ";
    cin >> totalMilk;

    
    cartonsNeeded = static_cast<int>(totalMilk / CARTON_CAPACITY + 0.5);

    
    productionCost = totalMilk * COST_PER_LITER;

    
    profit = cartonsNeeded * PROFIT_PER_CARTON;

  
    cout << "Number of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Total cost of producing milk: $" << productionCost << endl;
    cout << "Total profit from milk production: $" << profit << endl;

    return 0;
}

