#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float n = 200, a = 0, b = 3;
	double h = (b - a) / n;
	double x = a;
	double s = 0;
	while (x < (b - h)) // пишем условие, при котором осуществляется метод трапеции
	{
		s += h * (pow(x, 3) - 1) + (pow(x + h, 3) - 1) / 2; //формула для метода трапеции
		x = x + h;
	}
	cout << "Метод трапеции: " << s;
}
