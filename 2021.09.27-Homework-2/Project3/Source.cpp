#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    int r = 0;
    int t = 0;

    cin >> k;
    cin >> m;
    cin >> n;
    cin >> r;
    cin >> t;

    if ((n == 0) || (k == 0))cout << r; else
        if (n <= k)
        {
            r = 2 * m;
            cout << r;
        }
    t = n;
    if (n > k)
        while (n > 0)
        {
            n -= k;
            r += 2 * m;
        }
    if ((!(k == 0)) && (!(t == 0)) && (t > k)) cout << r;

    return EXIT_SUCCESS;
}