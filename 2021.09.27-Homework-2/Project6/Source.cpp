#include <iostream> 
using namespace std;
int main()
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	if ((x1 - x2) == (y1 - y2) or (x1 == x2) or (y1 == y2))
		cout << "YES";
	else
		cout << "NO";
	return EXIT_SUCCESS;
}