#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float n = 200, a = 1, b = 6, s1 = 0, s2 = 0, i = 1, x, h, p;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) //пишем условие, при котором будет осуществляться метод парабол
	{
		s1 = s1 + (1 + pow(x, 3));
		x = x + h;
		s2 = s2 + (1 + pow(x, 3));
		x = x + h;
		i = i + 1;
	}
	p = h / 3 * (pow(a, 2) - 4 * (pow(a + h, 2)) + 4 * s1 + 2 * s2 + 1 + pow(b, 2) - 4); //вычисление значения площади криволинейной трапеции
	cout << "Метод параболы: " << p; //вывод метода параболы
}
