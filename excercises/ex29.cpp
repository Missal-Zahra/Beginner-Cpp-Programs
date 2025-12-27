#include <iostream>
#include <cmath>

using namespace std;

const double CUBIC_YARD_TO_CUBIC_FEET = 27.0;

int main() {
    double concreteVolumeYards, thicknessInches, lengthWidthRatio;
    double areaFeet, width, length, thicknessFeet;

    cout << "Enter the amount of premixed concrete ordered (in cubic yards): ";
    cin >> concreteVolumeYards;

    cout << "Enter the thickness of the patio (in inches): ";
    cin >> thicknessInches;

    cout << "Enter the length-to-width ratio: ";
    cin >> lengthWidthRatio;

    thicknessFeet = thicknessInches / 12.0;
    areaFeet = (concreteVolumeYards * CUBIC_YARD_TO_CUBIC_FEET) / thicknessFeet;

    width = sqrt(areaFeet / lengthWidthRatio);
    length = lengthWidthRatio * width;

    cout << "\nWidth of the patio: " << width << " feet" << endl;
    cout << "Length of the patio: " << length << " feet" << endl;

    return 0;
}

