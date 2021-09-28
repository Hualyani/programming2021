#include <iostream>

using namespace std;
int x = 0;
int y = 0;
int n = 0;
int m = 0;
int main()
{
	cin >> n;
	cin >> m;
	cin >> x;
	cin >> y;

	if (x > 1)

		cout << x - 1 << " " << y;

	else

		cout << x << " " << y - 1 << endl;

	if (x < n)

		cout << x + 1 << " " << y << endl;

	if (y < m)

		cout << x << " " << y + 1 << endl;

	return EXIT_SUCCESS
}
