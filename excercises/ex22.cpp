#include <iostream>

using namespace std;

const double METRIC_TON = 2205.0;

int main() {
    double bagWeight, bagsNeeded;

    cout << "Enter the amount of rice a bag can hold (in pounds): ";
    cin >> bagWeight;

    bagsNeeded = METRIC_TON / bagWeight;

    cout << "The number of bags needed to store one metric ton of rice: " << bagsNeeded << endl;

    return 0;
}

