#define _USE_MATH_DEFINES
#include <iostream>
#include <clocale>
#include <cmath>


using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");
	
	float x;
	cout << "�������: ";
	cin >> x;
	cout << "�������: " << (x * M_PI) / 180 << endl;

	cout << "�������: ";
	cin >> x;
	cout << "�������: " << (x * 180) / M_PI << endl;

	float y, a;
	cout << "X, A, Y: ";
	cin >> x >> a >> y;
	cout << x << "�� ������ �����: " << a << " ������, 1�� ������ �����: " << a / x << " ������, " << y << "�� ������ �����: " << y * (a / x) << " ������" << endl;
	
	
	float v1, v2, s, t;
	cout << "V1, V2, S, T: ";
	cin >> v1 >> v2 >> s >> t;
	cout << "���������� ����� ���� ����� " << t << " ����� ����� " << s + v1 * t + v2 * t << "��" << endl;

	float b;
	cout << "A, B: ";
	cin >> a >> b;
	cout << "x = " << -1 * b / a << endl;

	float c, a1, b1, c1;
	cout << "A1, B1, C1, A2, B2, C2: ";
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	cout << "x = " << (c1 * b - c * b1) / (a1 * b - a * b1) << " y = " << (c - a * (c1 * b - c * b1) / (a1 * b - a * b1)) / b << endl;
	return 0;
}