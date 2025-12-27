#include <iostream>

using namespace std;

const double SERVICE_CHARGE_RATE = 0.015; // 1.5% service charge

int main() {
    int numShares;
    double purchasePrice, sellingPrice;
    double amountInvested, sellingAmount, totalServiceCharges, gainOrLoss, amountReceived;

    // Input from user
    cout << "Enter the number of shares sold: ";
    cin >> numShares;

    cout << "Enter the purchase price per share: ";
    cin >> purchasePrice;

    cout << "Enter the selling price per share: ";
    cin >> sellingPrice;

    // Calculations
    amountInvested = numShares * purchasePrice;
    sellingAmount = numShares * sellingPrice;

    double buyServiceCharge = amountInvested * SERVICE_CHARGE_RATE;
    double sellServiceCharge = sellingAmount * SERVICE_CHARGE_RATE;
    totalServiceCharges = buyServiceCharge + sellServiceCharge;

    gainOrLoss = sellingAmount - amountInvested - totalServiceCharges;
    amountReceived = sellingAmount - sellServiceCharge;

    // Output results
    cout << "\nAmount Invested: $" << amountInvested << endl;
    cout << "Total Service Charges: $" << totalServiceCharges << endl;
    cout << "Amount Gained/Lost: $" << gainOrLoss << endl;
    cout << "Amount Received After Selling: $" << amountReceived << endl;

    return 0;
}

