#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33]; // объявление массива символов размером 33 байта
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1; // создание maskB; инверсия битов maskA; сдвиг 1 бита вправо
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2); // преобразование целого числа в строку в 2-иочой с/c
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2); // битовая операция между и А и maskA; сдвиг бита вправо на 1
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2); // // битовая операция между и B и maskB; очистка битов в B на основе maskB
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2); //объединение битов
	cout << " Результат B=" << tmp << endl;
}
