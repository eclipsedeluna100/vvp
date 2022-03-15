#include <clocale>
#include <iostream>
#include <cmath>


using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "a и b: ";
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
	cout << "a, b и c: ";
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


	cout << "a, b и c: ";
	cin >> a >> b >> c;
	if (abs(a - b) < abs(a - c)) {
		cout << "точка b - " << b << " ближе, расстояние - " << abs(a - b) << endl;
	}
	else {
		cout << "точка c - " << c << " ближе, расстояние - " << abs(a - c) << endl;
	}


	int x, y;
	cout << "Координаты точки: ";
	cin >> x >> y;
	if (x > 0 and y > 0) {
		cout << "I координатная четверть" << endl;
	}
	else if (x < 0 and y>0) {
		cout << "II координатная четверть" << endl;
	}
	else if (x < 0 and y < 0) {
		cout << "III координатная четверть" << endl;
	}
	else if (x > 0 and y < 0) {
		cout << "IV координатная четверть" << endl;
	}

	cout << "Введите число: ";
	cin >> a;
	if (a > 0 and a % 2 == 0) {
		cout << "Это положительное четное число" << endl;
	}
	else if (a > 0 and a % 2 != 0) {
		cout << "Это положительное нечетное число" << endl;
	}
	else if (a < 0 and a % 2 == 0) {
		cout << "Это отрицательное четное число" << endl;
	}
	else if (a < 0 and a % 2 != 0) {
		cout << "Это отрицательное нечетное число" << endl;
	}
	else {
		cout << "Это нулевое число" << endl;
	}


	cout << "Введите число: ";
	cin >> a;
	if (a < 100 and a > 9) {
		if (a % 2 == 0) {
			cout << "Это четное двузначное число" << endl;
		}
		else {
			cout << "Это нечетное двузначное число" << endl;
		}
	}
	else if (a < 10) {
		if (a % 2 == 0) {
			cout << "Это четное однозначное число" << endl;
		}
		else {
			cout << "Это нечетное однозначное число" << endl;
		}
	}
	else {
		if (a % 2 == 0) {
			cout << "Это четное трехзначное число";
		}
		else {
			cout << "Это нечетное трехзначное число";
		}
	}
	return 0;
}