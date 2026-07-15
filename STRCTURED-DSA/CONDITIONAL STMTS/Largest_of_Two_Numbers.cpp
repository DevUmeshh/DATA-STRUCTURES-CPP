#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter Number 1 : ";
    cin >> a;
    cout << "Enter Number 2 : ";
    cin>>b;

    if (a > b)
    {
        cout << a << " is Largest";
    }
    else
    {
        cout << b << " is Largest";
    }

    return 0;
}