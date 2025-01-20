#include <iomanip>>
#include <iostream>

void main()

{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашиваем символ для заполнения фигуры
	cout << setw(34) << setfill(space) << space;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(space) << space;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(32) << setfill(space) << space;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(31) << setfill(space) << space;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(29) << setfill(space) << space;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(28) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(27) << setfill(space) << space;
	cout << setw(26) << setfill(c) << c << endl;
	cout << setw(26) << setfill(space) << space;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(25) << setfill(space) << space;
	cout << setw(30) << setfill(c) << c << endl;
}