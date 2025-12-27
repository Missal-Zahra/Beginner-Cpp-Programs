#include <iostream>

using namespace std;

int main() {
    double tankCapacity, milesPerGallon, totalMiles;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

    totalMiles = tankCapacity * milesPerGallon;

    cout << "The automobile can be driven approximately " << totalMiles << " miles without refueling." << endl;

    return 0;
}

