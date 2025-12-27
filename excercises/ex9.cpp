#include <iostream>

using namespace std;

int main()
 {
    
    const int SECRET = 11;
    const double RATE = 12.50;

    
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Test Case 1:" << endl;
    num1 = 13;
    num2 = 28;
    name = "Jacobson";
    hoursWorked = 48.30;

    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;

    newNum = (num1 * 2) + num2;
    cout << "The value of newNum = " << newNum << endl;

    newNum += SECRET;
    cout << "After adding SECRET, the new value of newNum = " << newNum << endl;

    wages = RATE * hoursWorked;
    
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    cout << "\nTest Case 2:" << endl;
    
    
    num1 = 32;
    num2 = 15;
    name = "Crawford";
    hoursWorked = 58.45;

    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;

    newNum = (num1 * 2) + num2;
    cout << "The value of newNum = " << newNum << endl;

    newNum += SECRET;
    cout << "After adding SECRET, the new value of newNum = " << newNum << endl;

    wages = RATE * hoursWorked;
    
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    return 0;
}

