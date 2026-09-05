#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 5;

    for (; i < 3; i++, j--)
        cout << i << j << " ";
}