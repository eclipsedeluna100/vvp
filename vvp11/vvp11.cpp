#include <clocale>
#include <iostream>
#include <cmath>


using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "a � b: ";
	cin >> a >> b;
	if (a != b) {
		a = max(a, b);
		b = max(a, b);
	}
	else {
		a = 0;
		b = 0;
	}
	cout << "a = " << a << " b = " << b << endl;


	int c;
	cout << "a, b � c: ";
	cin >> a >> b >> c;
	if (a < b and a < c) {
		cout << b + c << endl;
	}
	else if (b < a and b < c) {
		cout << a + c << endl;
	}
	else if (c < a and c < b) {
		cout << a + b << endl;
	}


	cout << "a, b � c: ";
	cin >> a >> b >> c;
	if (abs(a - b) < abs(a - c)) {
		cout << "����� b - " << b << " �����, ���������� - " << abs(a - b) << endl;
	}
	else {
		cout << "����� c - " << c << " �����, ���������� - " << abs(a - c) << endl;
	}


	int x, y;
	cout << "���������� �����: ";
	cin >> x >> y;
	if (x > 0 and y > 0) {
		cout << "I ������������ ��������" << endl;
	}
	else if (x < 0 and y>0) {
		cout << "II ������������ ��������" << endl;
	}
	else if (x < 0 and y < 0) {
		cout << "III ������������ ��������" << endl;
	}
	else if (x > 0 and y < 0) {
		cout << "IV ������������ ��������" << endl;
	}

	cout << "������� �����: ";
	cin >> a;
	if (a > 0 and a % 2 == 0) {
		cout << "��� ������������� ������ �����" << endl;
	}
	else if (a > 0 and a % 2 != 0) {
		cout << "��� ������������� �������� �����" << endl;
	}
	else if (a < 0 and a % 2 == 0) {
		cout << "��� ������������� ������ �����" << endl;
	}
	else if (a < 0 and a % 2 != 0) {
		cout << "��� ������������� �������� �����" << endl;
	}
	else {
		cout << "��� ������� �����" << endl;
	}


	cout << "������� �����: ";
	cin >> a;
	if (a < 100 and a > 9) {
		if (a % 2 == 0) {
			cout << "��� ������ ���������� �����" << endl;
		}
		else {
			cout << "��� �������� ���������� �����" << endl;
		}
	}
	else if (a < 10) {
		if (a % 2 == 0) {
			cout << "��� ������ ����������� �����" << endl;
		}
		else {
			cout << "��� �������� ����������� �����" << endl;
		}
	}
	else {
		if (a % 2 == 0) {
			cout << "��� ������ ����������� �����";
		}
		else {
			cout << "��� �������� ����������� �����";
		}
	}
	return 0;
}