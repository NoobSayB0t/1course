#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, sum = 0; int i;
	const int size = 4;  
	for (i = 0; i < size; i++)   
	{
		cout << "Введите a: " << endl;  
		cin >> a; 
		sum += a;
	}
	cout << "Ответ: " << sum << endl;
}
