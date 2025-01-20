#include <iostream>
#include <cmath>//подключение математических функций
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double p, q;
	int d = 0;
	cout << "Ввести выручку p и выручку q: ";
	cin >> p >> q;//ввод выручки
	if (p >= q) {//если p>=q
		cout << "Некорректные данные" << endl;//то выводим некорректные данные
	}
	while (p <= q)//пока p<=q
	{
		p = p + p * 0.3;//то увеличиваем ежедневную выручку на 3 %
		d = d + 1;//увеличивать на 1 кол-во дней
	}
	cout << "День: " << d << endl;//вывод дней
	cout << "Вывести новую выручку p: " << p << endl;//вывод выручки
}
