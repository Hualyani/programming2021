#include <iostream>

using namespace std; 
int    main()
{ 
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int s = 0;

	cin >> a;  
	b = a / 100;
	c = a / 10 - b * 10; 
	d = a - b * 100 - c * 10;
	s = b + c + d; 
	
	return EXIT_SUCCESS;
}