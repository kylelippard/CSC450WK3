#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // Ask the user to enter three integer values
    cout << "Enter three integer values:" << endl;
    cout << "Value 1: ";
    cin >> num1;
    cout << "Value 2: ";
    cin >> num2;
    cout << "Value 3: ";
    cin >> num3;

    // Create integer pointers and allocate dynamic memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values in the dynamic memory locations
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the contents of the variables
    cout << "\nThe values stored in the variables:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    // Display the contents of the pointers
    cout << "\nThe values stored in the dynamic memory pointed by pointers:" << endl;
    cout << "Pointer ptr1 points to value: " << *ptr1 << endl;
    cout << "Pointer ptr2 points to value: " << *ptr2 << endl;
    cout << "Pointer ptr3 points to value: " << *ptr3 << endl;

    // Free the dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}