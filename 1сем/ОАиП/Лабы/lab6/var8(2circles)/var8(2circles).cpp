#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double j = 0.1, n = 9, t = -7.4, w, s; 
	while (j <= 0.4)//пока j меньше или равен 0.4 
	{
		for (int y = 0; y < 3; y++)//вложеннный цикл for для y 
		{
			cout << "Введите y: ";
			cin >> y;
			w = (0.6 * j) + exp(t * j) * pow(4 * y / n, 2);
			s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
			cout << "Значение w: " << w << endl;
			cout << "Значение s: " << s << endl;
		}
		j += 0.1;//шаг для j равен 0.1 
	}
	return 0;
}