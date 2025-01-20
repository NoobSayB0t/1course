#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	string weather;
	cout << "Введите погоду (хорошая/плохая): " << endl;
	cin >> weather;
	if (weather == "хорошая") {
		cout << "Погода сегодня хорошая. Студент идет гулять." << endl;
	}
	else if (weather == "плохая") {
		cout << "Сегодня плохая погода." << endl;
		cout << "Студент пишет реферат." << endl;
		cout << "Студент обедает." << endl;
		cout << "Студент снова пишет реферат." << endl;
	}
	cout << "Выходной день завершён" << endl;
	return 0;
}