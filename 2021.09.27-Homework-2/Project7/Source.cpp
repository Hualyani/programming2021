#include <iostream>
using namespace std;
int main()
{
	int k = 0;
	int n = 0;
	int m = 0;
	cin >> k;
	cin >> n;
	cin >> m;
	if (((k == n) && (k % m == 0)) || ((k = m) && (k % n == 0)) || (((k == m) & (n == 1)) || ((k == n) & (m == 1))))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;