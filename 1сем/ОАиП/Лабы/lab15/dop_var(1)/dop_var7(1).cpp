#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int* ptr, n;
	cout << "Введите размер массива: ";
	cin >> n;
	if (!(ptr = (int*)malloc(n * sizeof(int))))   // выделение памяти и проверка
	{	                                          // достаточно ли для нее места
		cout << "Недостаточно памяти";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элементы массива " << i + 1 << " : ";
		cin >> *(ptr + i);
	}
	int sum = 0;
	cout << "Введенный массив: ";
	for (int i = 0; i < n; i++) // находим сумму элементов массива
	{
		cout << *(ptr + i) << ' ';
		sum += *(ptr + i);
	}
	double number = sum / n; //инициализируем переменную среднего арифметического и счетчик
	int count = 0;
	for (int i = 0; i < n; i++) //с помощью цикла определяем больше или меньше элемент среднего арифметического
	{
		if (*(ptr + i) > number) {
			count++;
		}
		else
			continue;
	}
	cout << endl;
	cout << "Количество элементов массива больших, чем среднеее арифметическое (" << number << "): " << count;
	free(ptr); // освобождение динамической памяти
}
