#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float n = 200, a = 4, b = 7;
	double h = (b - a) / n;
	double x = a;
	double s = 0;
	while (x < (b - h)) //пишем условие, при котором будет осуществляться метод трапеции
	{
		s += h * (pow(cos(x), 3) + pow(cos(x + h), 3)) / 2; //формула для метода трапеции
		x = x + h;
	}
	cout << "Метод трапеции: " << s;
}
