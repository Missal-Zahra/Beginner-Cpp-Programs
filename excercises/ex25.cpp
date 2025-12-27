#include <iostream>

using namespace std;

const double PI = 3.1416;

int main() {
    double wireLength, radius, area;

    cout << "Enter the total length of the wire: ";
    cin >> wireLength;

    radius = wireLength / (2 * PI);
    area = PI * radius * radius;

    cout << "\nRadius of the circle: " << radius << " units" << endl;
    cout << "Area of the circle: " << area << " square units" << endl;

    return 0;
}

