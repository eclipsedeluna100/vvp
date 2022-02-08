#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");


	float a, b, c;
	cout << "Значения a и b: ";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "a = " << a << " b = " << b << endl;

	float d;
	cout << "Значения a, b и c: ";
	cin >> a >> b >> c;
	d = b;
	b = a;
	a = c;
	c = d;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	cout << "Значения a, b и c: ";
	cin >> a >> b >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	float x, y;
	cout << "x = ";
	cin >> x;
	cout << "3x^6 - 6x^2 - 7 = " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7 << endl;

	cout << "x = ";
	cin >> x;
	cout << "4(x-3)^6 - 7(x-3)^3 + 2 = " << 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2 << endl;


	cout << "a = ";
	cin >> a;
	d = pow(a, 2);
	cout << "a^8 = " << d * d * d << endl;


	cout << "a = ";
	cin >> a;
	d = pow(a, 2);
	c = pow(a, 7);
	cout << "a^15 = " << d * d * d * d * c << endl;
	return 0;
	
}