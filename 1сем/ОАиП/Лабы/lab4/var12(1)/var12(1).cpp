#include <iomanip>>
#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашиваем символ для заполнения фигуры
	cout << setw(15) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl;  
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space;   
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl; 
	cout << setw(15) << setfill(space) << space; 
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(15) << setfill(space) << space;  
	cout << setw(1) << setfill(c) << c << endl; 
}