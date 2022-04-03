#include <iostream>
#include "IntPower.h"

using namespace std;

int main() 
{
	IntPower a(2, 3);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	IntPower x;
	cin >> x;
	x.power();

	return 0;
}