#include <iostream>

using namespace std;

const double COVERAGE_PER_GALLON = 120.0;

int main() {
    double roomLength, roomWidth, roomHeight;
    double doorWidth, doorHeight, windowWidth, windowHeight, bookshelfWidth, bookshelfHeight;
    double wallArea, totalPaintableArea, paintNeeded;

    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    cout << "Enter the width and height of the door (in feet): ";
    cin >> doorWidth >> doorHeight;

    cout << "Enter the width and height of a window (in feet): ";
    cin >> windowWidth >> windowHeight;

    cout << "Enter the width and height of the bookshelf (in feet): ";
    cin >> bookshelfWidth >> bookshelfHeight;

    wallArea = 2 * (roomLength * roomHeight + roomWidth * roomHeight);
    totalPaintableArea = wallArea - (doorWidth * doorHeight + 2 * (windowWidth * windowHeight) + bookshelfWidth * bookshelfHeight);
    paintNeeded = totalPaintableArea / COVERAGE_PER_GALLON;

    cout << "\nTotal paint needed: " << paintNeeded << " gallons" << endl;

    return 0;
}

