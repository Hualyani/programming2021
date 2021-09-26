#include <iostream>

using namespace std;

int main()
{
	int h1 = 0;

	int m1 = 0;

	int s1 = 0;

	cin >> h1;

	cin >> m1;

	cin >> s1;

	int sec1 = s1 + m1 * 60 + h1 * 3600;

	int h2 = 0;

	int m2 = 0;

	int s2 = 0;

	cin >> h2;

	cin >> m2;

	cin >> s2;

	int sec2 = s2 + m2 * 60 + h2 * 3600;

	cout << sec2 - sec1 << endl;

return  EXIT_SUCCESS;

}
