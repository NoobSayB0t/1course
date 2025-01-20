#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float n, x, sum = 0;
	cout << "Ввести последовательность n: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) // начинаем цикл for с 1, так как нам нужно чтобы порядковые номера совпадали c ПК
	{
		cin >> x;
		if (i % 2 == 0) // если число делится на 2, то он будет четным
		{
			sum += x;
		}
	}
	cout << sum;
}
