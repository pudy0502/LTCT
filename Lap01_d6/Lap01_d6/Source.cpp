#include <iostream>
using namespace std;
int main() {
	int x = 20, y = 6;
	cout << x++ << endl;
	x--;
	cout << x-- << endl;
	x++;
	cout << ++x << endl;
	x--;
	cout << --x << endl;
	x++;
	cout << (x / y) << endl;
	cout << (x%y) << endl;
	x = (x *= y);
	cout << x << endl;
	return 0;
}