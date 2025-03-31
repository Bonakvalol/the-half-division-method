#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

float f(float x) {
    return x * sin(x) - 1;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c, exp, x;

    cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;
    cout << "Введите exp = ";
    cin >> exp;

    do {
        c = (a + b) / 2;
        if (f(a) * f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    } while (b - a > exp);

    x = (a + b) / 2;
    cout << fixed << setprecision(6);
    cout << "X = " << x << endl;

    return 0;
}
