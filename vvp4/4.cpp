#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "Стороны прямоугольника: ";
	cin >> a >> b;
	cout << "Площадь прямоугольника: " << a * b << endl;
	cout << "Периметр прямоугольника: " << (a + b) * 2 << endl;


	float d;
	cout << "Диаметр окружности: ";
	cin >> d;
	cout << "Длина окружности: " << d * 3.14 << endl;

	
	cout << "Два числа: ";
	cin >> a >> b;
	cout << "Их среднее арифметическое: " << (a + b) / 2 << endl;


	cout << "Два ненулевых числа: ";
	cin >> a >> b;
	cout << "Cумма их квадратов:" << a * a + b * b << endl;
	cout << "Разность их квадратов: " << a * a - b * b << endl;
	cout << "Произведение их квадратов: " << (a * a) * (b * b) << endl;
	cout << "Частное их квадратов: " << (a * a) / (b * b) << endl;

	cout << "Два ненулевых числа: ";
	cin >> a >> b;
	cout << "Cумма их модулей: " << abs(a) + abs(b) << endl;
	cout << "Разность их модулей: " << abs(a) - abs(b) << endl;
	cout << "Произведение их модулей: " << abs(a) * abs(b) << endl;
	cout << "Частное их модулей: " << abs(a) / abs(b) << endl;

	return 0;
}
