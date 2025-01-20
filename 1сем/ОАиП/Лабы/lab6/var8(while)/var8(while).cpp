#include <iostream>
#include <cmath>//подключение математической функции
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//объявление переменных
	double j = 0, y = 5, n = 9, t = -7.4, w, s; 
	while (j < 2)//пока j меньше 2
	{
		w = (0.6 * j) + exp(t * j) * pow(4 * y / n, 2); 
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		//выводим переменные
		cout << "Вывести значение j: " << j << endl;
		cout << "Вывести значение w: " << w << endl;
		cout << "Вывести значение s: " << s << endl;
		j += 0.1;//шаг для j равен 0.1
	}
	return 0;
}
