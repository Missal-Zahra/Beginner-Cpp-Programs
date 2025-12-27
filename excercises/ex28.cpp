#include <iostream>

using namespace std;

int main() {
    double numStudents, caloriesPerStudent, caloriesPerPoundNuts;
    double totalCalories, poundsNuts, poundsFruit;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "Enter the number of calories required per student: ";
    cin >> caloriesPerStudent;

    cout << "Enter the number of calories per pound of nuts: ";
    cin >> caloriesPerPoundNuts;

    totalCalories = numStudents * caloriesPerStudent;
    poundsNuts = totalCalories / (caloriesPerPoundNuts + (caloriesPerPoundNuts / 0.7));
    poundsFruit = poundsNuts;

    cout << "\nAmount of nuts needed: " << poundsNuts << " pounds" << endl;
    cout << "Amount of dried fruit needed: " << poundsFruit << " pounds" << endl;

    return 0;
}

