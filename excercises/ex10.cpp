#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, num3, num4, num5, product;
    int roundedProduct;
    
    
    cout << "Enter decimal number 1: ";
    cin >> num1;
    cout << "Enter decimal number 2: ";
    cin >> num2;
    cout << "Enter decimal number 3: ";
    cin >> num3;
    cout << "Enter decimal number 4: ";
    cin >> num4;
    cout << "Enter decimal number 5: ";
    cin >> num5;
    
    
    product = num1 * num2 * num3 * num4 * num5;
    
    
    roundedProduct = (product >= 0) ? (product + 0.5) : (product - 0.5);
    
   
    cout << "The product rounded to the nearest integer is: " << roundedProduct << endl;
    
    return 0;
}

