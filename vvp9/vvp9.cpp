#include <clocale>
#include <iostream>


using namespace std;


int main() {
	
	setlocale(LC_ALL, "Russian");


	int n;
	cout << "Прошло секунд с начала суток: ";
	cin >> n;
	cout << "Прошло секунд с последней минуты: " << n % 60 << endl;

	int k;
	cout << "День в году: ";
	cin >> k;
	cout << "Номер дня недели: " << k % 7 << endl;

	cout << "День в году: ";
	cin >> k;
	cout << "Номер дня, который был 1го января: ";
	cin >> n;
	cout << "Номер дня недели: " << ((k + n - 2) % 7) + 1 << endl;

	int a, b, c;
	cout << "A, B, C: "; 
	cin >> a >> b >> c;
	cout << "Кол-во квадратов: " << (a * b) / (c * c) << " Площадь незанятой части прямоугольника: " << (a * b) - ((c * c) * ((a * b) / (c * c))) << endl;
	
	cout << "Номер года: ";
	cin >> n;
	if (n % 10 > 0 or n % 100 > 0) {
		k = n / 100 + 1;
	}
	else {
		k = n / 100;
	}
	cout << "Номер столетия: " << k << endl;
	return 0;
}