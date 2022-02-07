#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");


	float x1, x2, y1, y2;
	cout << "Координаты первой точки: ";
	cin >> x1 >> y1;
	cout << "Координаты второй точки: ";
	cin >> x2 >> y2;
	cout << "Расстояние между точками = " << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)) << endl;


	float a, b, c;
	cout << "Введите 3 точки: ";
	cin >> a >> b >> c;
	cout << "Расстояние между точками a и c = " << abs(a - c) << endl;
	cout << "Расстояние между точками b и c = " << abs(b - c) << endl;
	cout << "Сумма длин отрезков ac и bc = " << abs(a - c) + abs(b - c) << endl;


	cout << "Введите 3 точки (Точка с находится между a и b): ";
	cin >> a >> b >> c;
	cout << "Произведение длин отрезков ac и bc = " << abs(a - c) * abs(b - c) << endl;


	cout << "Координаты вершины прямоугольника: ";
	cin >> x1 >> y1;
	cout << "Координаты противоположной вершины прямоугольника: ";
	cin >> x2 >> y2;
	cout << "Периметр прямоугольника = " << 2 * (abs(x1 - x2) + abs(y1 - y2)) << endl;
	cout << "Площадь прямоугольника = " << abs(x1 - x2) * abs(y1 - y2) << endl;


	float x3, y3, p;
	cout << "Координаты первой точки: ";
	cin >> x1 >> y1;
	cout << "Координаты второй точки: ";
	cin >> x2 >> y2;
	cout << "Координаты третий точки: ";
	cin >> x3 >> y3;
	a = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	b = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));
	c = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	p = (a + b + c) / 2;
	cout << "Периметр треугольника = " << p * 2 << endl;
	cout << "Площадь треугольника = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;


	return 0;
}