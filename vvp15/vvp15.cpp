#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

void PowerA3(float a, float *b) {
    *b = a * a * a;
}

int Sign(float x) {
    if (x < 0) {
        return -1;
    }
    if (x == 0) {
        return 0;
    }
    if (x > 0) {
        return 1;
    }
}


float RingS(float r1, float r2){
    return 3.14 * (r1 * r1 - r2 * r2);
}


int Quarter(float x, float y) {
    if (x > 0 and y > 0) {
        return 1;
    }
    if (x < 0 and y>0) {
        return 2;
    }
    if (x < 0 and y < 0) {
        return 3;
    }
    if (x > 0 and y < 0) {
        return 4;
    }
}


int Fact2(int n) {
    int k = 1;
    for (int i = n; i > 0; i-=2) {
        k *= i;
    }
    return k;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int i = 1; i <= 5; i++) {
        float a;
        cout << "A: ";
        cin >> a;
        float b;
        PowerA3(a, &b);
        cout << "B: " << b << endl;
    }


    float a, b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "Sign(A) + Sign(B) = " << Sign(a) + Sign(b) << endl;


    for (int i = 1; i <= 3; i++) {
        float r1, r2;
        cout << "R1: ";
        cin >> r1;
        cout << "R2: ";
        cin >> r2;
        cout << "S = " << RingS(r1, r2) << endl;
    }


    for (int i = 1; i <= 3; i++) {
        float x, y;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        cout << "Четверть: " << Quarter(x, y) << endl;
    }


    int n;
    cout << "N: ";
    cin >> n;
    cout << "Двойной факториал: " << Fact2(n) << endl;
}
