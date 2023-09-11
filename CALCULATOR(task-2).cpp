//TASK-2
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    char operation;
    bool continueCalculation = true;

    cout << "----------------------------------------" << endl;
    cout << "Simple Calculator Application" << endl;
    cout << "----------------------------------------" << endl;

    while (continueCalculation)
    {
        cout << "Available operations:" << endl;
        cout << "+ : Addition" << endl;
        cout << "- : Subtraction" << endl;
        cout << "* : Multiplication" << endl;
        cout << "/ : Division" << endl;
        cout << "----------------------------------------" << endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> num2;

        switch (operation)
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                {
                    result = num1 / num2;
                }
                else
                {
                    cout << "Error: Division by zero is not allowed." << endl;
                    continue; // Skip the rest of the loop and start over
                }
                break;
            default:
                cout << "Error: Invalid operation. Please enter +, -, *, or /." << endl;
                continue; // Skip the rest of the loop and start over
        }

        cout << "----------------------------------------" << endl;
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
        cout << "----------------------------------------" << endl;

        cout << "Do you want to continue? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') 
        {
            continueCalculation = false; // Exit the loop if the user doesn't want to continue
        }
    }

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}
