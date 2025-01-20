#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int num;
	cout << "Введите трехзначное число: ";
	cin >> num;
	if (num < 100 && num > 999)//проверяем является ли число трехзначным
	{
		cout << "Число должно было быть трехзначным." << endl;
		return 1;//завершение программы, если число некорректно
	}
	int hundreds = num / 100;//сотни
	int tens = (num / 10) % 10;//десятки
	int one = num % 10;//единицы
	int reversedNum = one * 100 + tens * 10 + hundreds;//создаем реверсивное число
	cout << "Реверсивное число: " << reversedNum << endl;//вывод сообщения
	return 0;
}
