#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float z, y, x, sd; //задаем вещественные переменные
	sd = 1.0 / 3.0;
	for (int n = 0; n < 4; n++)//цикл for для n
	{
		printf("Введите x ");
		scanf_s("%f", &x);
		z = 2 * pow(x, 2); //подставляем переменную в функции и считаем
		y = z + pow(x, sd); //подставляем переменные в функции и считаем
		printf("x = %5.2f\t", x);
		printf("y = %5.2f\n", y);
	}
}
