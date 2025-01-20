#include <iostream>
using namespace std;
void main()
{
	float z, y, x = 3;//ввод вещественных переменных
	while (x < 4.1)//пока x меньше 4.1
	{
		z = 2 * pow(x, 2); //подставляем переменную в функции и считаем
		y = z + pow(x, (float)1 / 3); //подставляем переменную в функции и считаем
		cout << "x=" << x << "\t";
		cout << " y=" << y << endl;
		x += 0.1;//шаг для x равен 0.1
	}
}
