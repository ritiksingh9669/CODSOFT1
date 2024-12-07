#include <iostream>
#include <limits>

using namespace std;

int main()
{
    double num1, num2;
    int operation;

    // Display a welcome message
    cout << "Welcome to the C++ Basic Calculator!" << endl;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Input operation choice
    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter the number corresponding to the operation: ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation)
    {
    case 1: // Addition
        cout << "Result: " << num1 + num2 << endl;
        break;
    case 2: // Subtraction
        cout << "Result: " << num1 - num2 << endl;
        break;
    case 3: // Multiplication
        cout << "Result: " << num1 * num2 << endl;
        break;
    case 4: // Division
        // Check for division by zero
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        else
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        break;
    default: // Invalid choice
        cout << "Invalid operation selected!" << endl;
    }

    return 0;
}
