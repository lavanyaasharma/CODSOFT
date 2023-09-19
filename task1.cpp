/*TASK 2:CALCULATOR
    TO PERFORM SIMPLE OPERATIONS
    SUCH AS:ADDITION,SUBSTRACTION,MULTIPLICATION & DIVISION */

#include <iostream>
#include <stdio.h>
using namespace std;
int a;
int b;
void display()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
}
void callop()
{
    char operation;
    cout << "Choose an operation to be performed (+,-,*,/):" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
    {
        cout << "ADDITION  OF " << a << " + " << b << " IS " << a + b << endl;
        break;
    }
    case '-':
    {
        cout << "SUBSTRACTION OF " << a << " - " << b << " IS " << a - b << endl;
        break;
    }
    case '*':
    {
        cout << "MULTIPLICATION OF " << a << " * " << b << " IS " << a * b << endl;
        break;
    }
    case '/':
    {
        cout << "DIVISIONON OF " << a << " / " << b << " IS " << a / b << endl;
        break;
    }
    default:
        cout << "INVALID OPERATION" << endl;
    }
}

int main()
{
    display();
    callop();
    return 0;
}