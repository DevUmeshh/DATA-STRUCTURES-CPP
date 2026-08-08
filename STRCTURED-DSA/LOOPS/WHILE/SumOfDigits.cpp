#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}