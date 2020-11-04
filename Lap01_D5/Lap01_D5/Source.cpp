#include <iostream>
using namespace std;
int main() {
	const int max = 60;
	long int n;
	cin >> n;
	cout << (n / (max*max)) << ":" << ((n % (max*max)) / max) << ":" << n%max << endl;