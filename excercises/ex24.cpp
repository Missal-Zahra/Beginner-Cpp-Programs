#include <iostream>

using namespace std;

int main() {
    double wireLength, width, length;

    cout << "Enter the total length of the wire: ";
    cin >> wireLength;

    width = wireLength / (2 * (1.5 + 1));
    length = 1.5 * width;

    cout << "\nWidth of the picture frame: " << width << " units" << endl;
    cout << "Length of the picture frame: " << length << " units" << endl;

    return 0;
}

