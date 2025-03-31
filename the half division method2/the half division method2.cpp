#include <iostream>
#include <cmath>

using namespace std;
float f(float x) {
	float y;
	y = x * sin(x) - 1;
	return y;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, exp, x;
	cout << "Введите а=";
	cin >> a;
	cout << endl;
	cout << "Введите b=";
	cin >> b;
	cout << endl;
	cout << "Введите exp=";
	cin >> exp;
	cout << endl;
	do {
		c = (a + b) / 2;
		if (f(a) * f(c) < 0) {
			b = c;
		}
		else {
			a = c;
		}
	} while (b - a > exp); {
		x = (a + b) / 2;
		cout.setf(ios::scientific);
		cout << "X=" << x << endl;

	}
}