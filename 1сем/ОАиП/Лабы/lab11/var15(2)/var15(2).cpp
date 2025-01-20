#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, p, n;
	cout << "Число A: ";
	cin >> A;
	cout << "Позиция слево: ";
	cin >> p;
	cout << "Количество битов: ";
	cin >> n;
	char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	int mask = ~((1 << (p + n)) - (1 << p));
	_itoa_s(mask, tmp, 2);
	cout << tmp << endl;
	_itoa_s(A & mask, tmp, 2);
	cout << tmp << endl;
}