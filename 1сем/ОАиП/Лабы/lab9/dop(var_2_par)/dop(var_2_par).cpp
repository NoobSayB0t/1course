﻿#include <iostream>//подключаем библиотеку
using namespace std;//чтобы не писать каждый раз std
int main()//объявляем функцию
{
	setlocale(LC_ALL, "Russian");//подключаем кириллицу
	float n = 200, a = 4, b = 7, s1 = 0, s2 = 0, i = 1, x, h, p;//объявляем переменные
	h = (b - a) / (2 * n);//формула h
	x = a + 2 * h;//формула x
	while (i < n)//пишем условие, при котором будет осуществляться метод парабол
	{
		s1 = s1 + (pow(x, 3) - 3);
		x = x + h;
		s2 = s2 + (pow(x, 3) - 3);
		x = x + h;
		i = i + 1;
	}
	p = h / 3 * ((pow(a, 3) - 3) + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3)); //вычисление значения площади криволинейной трапеции
	cout << "Метод параболы: " << p;//вывод метода интегралов/парабол
}
