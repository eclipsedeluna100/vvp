#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");


	float x1, x2, y1, y2;
	cout << "���������� ������ �����: ";
	cin >> x1 >> y1;
	cout << "���������� ������ �����: ";
	cin >> x2 >> y2;
	cout << "���������� ����� ������� = " << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)) << endl;


	float a, b, c;
	cout << "������� 3 �����: ";
	cin >> a >> b >> c;
	cout << "���������� ����� ������� a � c = " << abs(a - c) << endl;
	cout << "���������� ����� ������� b � c = " << abs(b - c) << endl;
	cout << "����� ���� �������� ac � bc = " << abs(a - c) + abs(b - c) << endl;


	cout << "������� 3 ����� (����� � ��������� ����� a � b): ";
	cin >> a >> b >> c;
	cout << "������������ ���� �������� ac � bc = " << abs(a - c) * abs(b - c) << endl;


	cout << "���������� ������� ��������������: ";
	cin >> x1 >> y1;
	cout << "���������� ��������������� ������� ��������������: ";
	cin >> x2 >> y2;
	cout << "�������� �������������� = " << 2 * (abs(x1 - x2) + abs(y1 - y2)) << endl;
	cout << "������� �������������� = " << abs(x1 - x2) * abs(y1 - y2) << endl;


	float x3, y3, p;
	cout << "���������� ������ �����: ";
	cin >> x1 >> y1;
	cout << "���������� ������ �����: ";
	cin >> x2 >> y2;
	cout << "���������� ������ �����: ";
	cin >> x3 >> y3;
	a = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	b = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));
	c = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	p = (a + b + c) / 2;
	cout << "�������� ������������ = " << p * 2 << endl;
	cout << "������� ������������ = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;


	return 0;
}