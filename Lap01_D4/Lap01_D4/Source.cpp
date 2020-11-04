#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c;
	double s, p;
	cin >> a >> b >> c;
	p = ((a + b + c) / 2);
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << p << endl << s<<endl;
}