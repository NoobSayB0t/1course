#include <iomanip>>
#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашиваем символ для заполнения фигуры
	cout << setw(10) << setfill(space) << space;  
	cout << setw(2) << setfill(c) << c << endl; 
	cout << setw(12) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(5) << setfill(space) << space; 
	cout << setw(9) << setfill(c) << c << endl;  
	cout << setw(12) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(10) << setfill(space) << space;  
	cout << setw(2) << setfill(c) << c << endl; 
	/*вправо*/
	cout << setw(8) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(7) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl; 
	cout << setw(6) << setfill(space) << space; 
	cout << setw(5) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	/*вверх*/
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(6) << setfill(space) << space;  
	cout << setw(5) << setfill(c) << c << endl; 
	cout << setw(7) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(8) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	/*вниз*/
	cout << setw(8) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(7) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(6) << setfill(space) << space;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(7) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(8) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	/*влево*/
}