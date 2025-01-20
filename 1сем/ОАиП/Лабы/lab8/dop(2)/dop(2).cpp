#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	float n, x, min = 0;
	cout << "Ввести последовательность n: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) // начинаем цикл for с 1, так как нам нужно чтобы порядковые номера совпадали с ПК
	{
		cin >> x;
		if (x < 0)  // если x будет меньше 0, то выводим минимальное значение(min)
		{
			min = i;
		}
	}
	cout << min;
}
