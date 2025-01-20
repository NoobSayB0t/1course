#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int k;
	cout << "Код цифры - 3" << endl << "Разница латинских букв - 1" << endl << "Разница русских букв - 2" << endl;
	cin >> k;
	switch (k)
	{
	case 1: {
		char upper, lower;
		cout << "Введите букву верхнего регистра: ";
		cin >> upper;
		cout << "Введите букву нижнего регистра: ";
		cin >> lower;
		if ((upper >= 'A') && (upper <= 'Z') || (lower >= 'a') && (lower <= 'z')) {
			cout << abs(int(upper) - int(lower));
		}
		else {
			cout << "Ошибка";
		}
		break;
	}
	case 2: {
		char upper1, lower1;
		cout << "Введите букву верхнего регистра: ";
		cin >> upper1;
		cout << "Введите букву нижнего регистра: ";
		cin >> lower1;
		if ((upper1 >= 'А') && (upper1 <= 'Я') || (lower1 >= 'а') && (lower1 <= 'я')) {
			cout << hex << abs(int(upper1) - int(lower1));
		}
		else {
			cout << "Ошибка";
		}
		break;
	}
	case 3: {
		char b;
		cout << "Введите цифру: ";
		cin >> b;
		if ((b >= '0') && (b <= '9')) {
			printf("%x", b);
		}
		else {
			cout << "Ошибка";
		}
		break;
	}
	}
}
