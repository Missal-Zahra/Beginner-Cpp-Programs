#include <iostream>

using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter the elapsed time in seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}

