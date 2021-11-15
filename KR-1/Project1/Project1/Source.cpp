#include <iostream>

using namespace std;

main()

{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> c;
	for (int i = 1; i <= c; i++)
	{
		cin >> b >> a;
		cout << 19 * a + (b + 239) * (b + 366) / 2 << endl;
	}
	return EXIT_SUCCESS;
}