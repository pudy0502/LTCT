#include <iostream>
#include <conio.h>
using namespace std;
void thongbao() {
	cout << "ban phai hoan thanh bai tap nay";
}
void xuatkitu(short ma) {
	
	char kytu = (char)ma;
	cout << endl << ma << " <=> " << kytu;
}
void xuatpt(float a, float b) {
	cout << endl << a << " * x + " << b << " = 0";
}
int main() {
	xuatkitu(157);
	short dollar = 36, ma;
	xuatkitu(dollar);
	cout << endl << "Nhap 1 so trong doan[30..225] : ";
	cin >> ma;
	xuatkitu(ma);
	xuatpt(2.3, 5);
	float p, q = 10;
	xuatpt(7.5, q);
	cout << endl << "Nhap mot so thuc : ";
	cin >> p;
	xuatpt(p,q);
	_getch();
	return 0;

}