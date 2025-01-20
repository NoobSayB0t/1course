#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, d, b, k = 6, a = 1.33e-3;
	double kor = k * sqrt(a);
	cin >> (x);
	while (x >= 0) {
		for (int i = 0; i < 4; i++)
			d = exp(-x) + (x - a) / log(x);
		if (d >= kor) {
			b = 6 * d * x;
		}
		else if (d < kor) {
			b = sin(a / x);
		}
	}
}
