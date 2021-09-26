#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    int b = 0;

    int c = 0;

    cout  << endl;

    cin >> a;

    cout << endl;

    cin >> b;

    c = ((a / b * a + b / a * b) / (a / b + b / a));

    cout << c;

    return EXIT_SUCCESS;

}