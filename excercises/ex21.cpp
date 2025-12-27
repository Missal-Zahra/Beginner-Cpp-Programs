#include <iostream>

using namespace std;

const double GRAVITATIONAL_CONSTANT = 6.67e-8;

int main() {
    double mass1, mass2, distance, force;

    cout << "Enter the mass of the first body (in grams): ";
    cin >> mass1;

    cout << "Enter the mass of the second body (in grams): ";
    cin >> mass2;

    cout << "Enter the distance between the two bodies (in cm): ";
    cin >> distance;

    force = (GRAVITATIONAL_CONSTANT * mass1 * mass2) / (distance * distance);

    cout << "The gravitational force between the bodies is: " << force << " dynes" << endl;

    return 0;
}

