﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int len; // переменная для длины массива
	cout << "Введите длину массива: "; //ввод длины массива
	cin >> len;
	int* mas = new int[len]; // объявление переменной для нового массива, длина которого будет равна длине исходного
	cout << "Введите элементы массива: " << endl;;
	for (int i = 0; i < len; i++) {
		cin >> mas[i]; //ввод элементов массива
	}
	int count = 0; // объявляет переменную, которая посчитает количество равных пар
	for (int i = 0; i < len; i++) { // цикл для подсчета пар
		if (mas[i] == mas[i + 1]) {
			count++;
		}
	}
	cout << "Количество пар соседних элементов с одинаковым значением: " << count;
}
