#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks";
    }
    else if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 80)
    {
        cout << "Grade B";
    }
    else if (marks >= 70)
    {
        cout << "Grade C";
    }
    else if (marks >= 60)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}