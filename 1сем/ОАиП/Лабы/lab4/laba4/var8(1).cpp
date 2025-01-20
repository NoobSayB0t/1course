#include <iomanip>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	/*голова*/
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	/*туловище*/
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(12) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	/*ноги*/
}