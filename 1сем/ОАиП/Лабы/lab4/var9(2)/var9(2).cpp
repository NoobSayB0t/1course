#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	double a;
	cout << "Введите число a: ";
	cin >> a;
	double a2 = a * a;//вычисление a^2
	double a4 = a2 * a2;//вычисление a^4
	cout << "a^4 = " << a4 << endl;
	return 0;
}