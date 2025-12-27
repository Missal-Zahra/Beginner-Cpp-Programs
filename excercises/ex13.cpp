#include <iostream>

using namespace std;

int main() {
    double originalPrice, markupPercentage, salesTaxRate, sellingPrice, salesTax, finalPrice;

    // User input
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    cout << "Enter the sales tax rate: ";
    cin >> salesTaxRate;

    
    sellingPrice = originalPrice + (originalPrice * markupPercentage / 100);

    salesTax = sellingPrice * (salesTaxRate / 100);

   
    finalPrice = sellingPrice + salesTax;

    
    cout << "\nOriginal Price: $" << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercentage << "%" << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax Rate: " << salesTaxRate << "%" << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price: $" << finalPrice << endl;

    return 0;
}

