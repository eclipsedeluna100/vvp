#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "A, B: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "A, B: ";
    cin >> a >> b;
    while (a >= 0) {
        a -= b;
    }
    cout << a + b << endl;


    int n;
    int k = 0;
    int sum = 0;
    cout << "N: ";
    cin >> n;
    while (n > sum) {
        k++;
        sum += k;
    }
    cout << "K = " << k << " " << "Сумма = " << sum << endl;
    


    float p;
    float s = 1000;
    k = 0;
    cout << "Процент: ";
    cin >> p;
    while (s < 1100) {
        s += s*p/100;
        k++;
    }
    cout << "Кол-во месяцев: " << k << " Итоговый размер вклада: " << s << endl;


    cout << "A, B: ";
    cin >> a >> b;
    while ((a != 0) and (b != 0)) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << a + b << endl;


    cout << "N: ";
    cin >> n;
    int f = 0, f1 = 1, f2 = 1;
    k = 2;
    while (f < n) {
        ++k;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << "Порядковый номер числа Фибоначчи N: " << k;
    return 0;
}
