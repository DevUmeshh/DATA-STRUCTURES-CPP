#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter Character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}