#include <iostream>

using namespace std;

int main() {
    double manufacturerSize, actualSize;

   
    cout << "Enter the hard drive size specified by the manufacturer (GB): ";
    cin >> manufacturerSize;

    
    actualSize = (manufacturerSize * 1000000000.0) / (1024.0 * 1024.0 * 1024.0);

  
    cout << "The actual storage capacity of the hard drive is approximately: " << actualSize << " GB" << endl;

    return 0;
}

