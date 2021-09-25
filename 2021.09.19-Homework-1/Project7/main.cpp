#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;

    cin >> a;

    cin >> b;

    a = a + b;

    b = b - a;

    b = -b;

    a = a - b;

    cout << a << " " << b;

    return 0;
}