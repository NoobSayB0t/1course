#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A = 100; char tmp[33]; // массив, который хранит двоичное представление числа
	_itoa_s(A, tmp, 3); // преобразование целого числа в строку
	cout << " Число А: " << tmp << endl;
	_itoa_s(0x24, tmp, 3); // представление числа в 16-ричной системе счисления
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A | 0x24, tmp, 3);
	cout << " Результат: " << tmp << endl << endl;
}
