#define _USE_MATH_DEFINES
#include <iostream>
#include <clocale>
#include <cmath>


using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int x;
	cout << "�����: ";
	cin >> x;
	cout << "���������� ������ ����������: " << x / 1024 << endl;


	int a, b;
	cout << "A, B: ";
	cin >> a >> b;
	cout << "���������� �������� B, ����������� �� ������� �: " << a / b << endl;

	cout << "A, B: ";
	cin >> a >> b;
	cout << "����� ��������� ����� ������� �: " << a - b * (a / b) << endl;


	cout << "���������� �����: ";
	cin >> x;
	cout << "���������� ����� ����� ������������: " << x % 10 << x / 10 << endl;

	
	cout << "���������� �����: ";
	cin >> x;
	cout << "���������� �����: " << x % 100 << x / 100 << endl;
}