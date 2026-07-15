#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter Character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "Alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Digit";
    }
    else
    {
        cout << "Special Character";
    }

    return 0;
}