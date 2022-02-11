#include <iostream>
#include <clocale>


using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int x;
	cout << "Байты: ";
	cin >> x;
	cout << "Количество полных килобайтов: " << x / 1024 << endl;


	int a, b;
	cout << "A, B: ";
	cin >> a >> b;
	cout << "Количество отрезков B, размещенных на отрезке А: " << a / b << endl;

	cout << "A, B: ";
	cin >> a >> b;
	cout << "Длина незанятой части отрезка А: " << a - b * (a / b) << endl;


	cout << "Двузначное число: ";
	cin >> x;
	cout << "Двузначное число после перестановки: " << x % 10 << x / 10 << endl;

	
	cout << "Трёхзначное число: ";
	cin >> x;
	cout << "Полученное число: " << x % 100 << x / 100 << endl;
}
