#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "Введите длину массива: ";
	cin >> k;
	int* A = new int[k]; // создаем динамический массив
	cout << "Введите элементы массива: ";
	for (int i = 0; i < k; i++)
	{
		cin >> A[i];
	}

	// инициализируем переменные для счетчика положительных элементов, поиска суммы элементов после 0, и переменную для поиска 0
	int count = 0;
	int lastzero = 0;
	bool zero = false;
	// с помощью цикла осуществляем поиск, сумму  и подсчет
	for (int i = 0; i < k; i++)
	{
		if (A[i] > 0) {
			count++;
		}
		if (A[i] == 0) {
			zero = true;
			lastzero = 0;
		}
		if (zero) {
			lastzero += A[i];
		}
	}
	cout << "Количество положительных элементов: " << count << endl;
	cout << "Сумма элементов, расположенных после 0: " << lastzero << endl;
	delete[] A; // очищаем массив из памяти
	return 0;
}
