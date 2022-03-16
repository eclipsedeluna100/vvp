#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");


    int n;
    cout << "Цена за 1кг конфет: ";
    cin >> n;
    for (float i = 1; i <= 10; i++) {
        cout << i/10 << " кг конфет стоит - " << n * (i/10) << endl;
    }


    cout << "N = ";
    cin >> n;
    float a = 1.1;
    float b = 1;
    for (int i=n; i != 0; i--) {
        b *= a;
        a += 0.1;
    }
    cout << b << endl;


    cout << "N = ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= (2 * n - 1); i += 2) {
        s += i;
        cout << s << endl;
    }
    cout << "N^2 = " << s << endl;

    s = 1;
    cout << "A, N: ";
    cin >> a >> n;
    for (int i = 1; i <= n; i++) {
        s += pow(a, i);
    }
    cout << "Сумма: " << s << endl;

    s = 1;
    cout << "A, N: ";
    cin >> a >> n;
    a = -a;
    for (int i = 1; i <= n; i++) {
        s += pow(a, i);
    }
    cout << "Сумма: " << s << endl;
    return 0;
}
