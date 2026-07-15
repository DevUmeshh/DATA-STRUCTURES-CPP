#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Operator (+ - * /): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> b;

    switch(op)
    {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            if (b != 0)
                cout << a / b;
            else
                cout << "Division by Zero Not Allowed";
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}