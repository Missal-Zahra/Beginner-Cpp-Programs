#include <iostream>

using namespace std;

int main() {
    double roomLength, roomWidth, roomHeight, coveragePerGallon;
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

    cout << "Enter the coverage per gallon of paint (in square feet): ";
    cin >> coveragePerGallon;

    wallArea = 2 * (roomLength * roomHeight + roomWidth * roomHeight);
    totalPaintableArea = wallArea - (doorWidth * doorHeight + 2 * (windowWidth * windowHeight) + bookshelfWidth * bookshelfHeight);
    paintNeeded = totalPaintableArea / coveragePerGallon;

    cout << "\nTotal paint needed: " << paintNeeded << " gallons" << endl;

    return 0;
}

