#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter Three Numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is Largest";
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is Largest";
    }
    else
    {
        cout << c << " is Largest";
    }

    return 0;
}