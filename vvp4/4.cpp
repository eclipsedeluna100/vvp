#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "������� ��������������: ";
	cin >> a >> b;
	cout << "������� ��������������: " << a * b << endl;
	cout << "�������� ��������������: " << (a + b) * 2 << endl;


	float d;
	cout << "������� ����������: ";
	cin >> d;
	cout << "����� ����������: " << d * 3.14 << endl;

	
	cout << "��� �����: ";
	cin >> a >> b;
	cout << "�� ������� ��������������: " << (a + b) / 2 << endl;


	cout << "��� ��������� �����: ";
	cin >> a >> b;
	cout << "C���� �� ���������:" << a * a + b * b << endl;
	cout << "�������� �� ���������: " << a * a - b * b << endl;
	cout << "������������ �� ���������: " << (a * a) * (b * b) << endl;
	cout << "������� �� ���������: " << (a * a) / (b * b) << endl;

	cout << "��� ��������� �����: ";
	cin >> a >> b;
	cout << "C���� �� �������: " << abs(a) + abs(b) << endl;
	cout << "�������� �� �������: " << abs(a) - abs(b) << endl;
	cout << "������������ �� �������: " << abs(a) * abs(b) << endl;
	cout << "������� �� �������: " << abs(a) / abs(b) << endl;

	return 0;
}