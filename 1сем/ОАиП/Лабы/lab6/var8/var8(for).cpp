#include <iostream>
#include <cmath>//подключение математической функции
using namespace std;

int main()//объявлении функции
{
	setlocale(LC_ALL, "Russian");
	double y = 5, n = 9, t = -7.4, w, s, j;
	for (int i = 0; i < 3; i++)//цикл for для i
	{
		cin >> j;//вводим j
		w = (0.6 * j) + exp(t * j) * pow(4 * y / n, 2); 
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "Вывести значение j: " << j << endl;
		cout << "Вывести значение w: " << w << endl;
		cout << "Вывести значение s: " << s << endl;
	}
}
