#include <clocale>
#include <iostream>


using namespace std;


int main() {
	
	setlocale(LC_ALL, "Russian");


	int n;
	cout << "������ ������ � ������ �����: ";
	cin >> n;
	cout << "������ ������ � ��������� ������: " << n % 60 << endl;

	int k;
	cout << "���� � ����: ";
	cin >> k;
	cout << "����� ��� ������: " << k % 7 << endl;

	cout << "���� � ����: ";
	cin >> k;
	cout << "����� ���, ������� ��� 1�� ������: ";
	cin >> n;
	cout << "����� ��� ������: " << ((k + n - 2) % 7) + 1 << endl;

	int a, b, c;
	cout << "A, B, C: "; 
	cin >> a >> b >> c;
	cout << "���-�� ���������: " << (a * b) / (c * c) << " ������� ��������� ����� ��������������: " << (a * b) - ((c * c) * ((a * b) / (c * c))) << endl;
	
	cout << "����� ����: ";
	cin >> n;
	if (n % 10 > 0 or n % 100 > 0) {
		k = n / 100 + 1;
	}
	else {
		k = n / 100;
	}
	cout << "����� ��������: " << k << endl;
	return 0;
}