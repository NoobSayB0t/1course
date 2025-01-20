#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL)); // подключаем генератор случайных чисел
	//вводим размер матрицы
	int n;
	cout << "Введите размер матрицы:\n";
	cin >> n;
	int** A = new int* [n];// с помощью указателей инициализируем матрицу А
	for (int i = 0; i < n; i++) {
		A[i] = new int[n]; // выделяем память для каждой строки
	}
	// выводим получившуюся матрицу, используя генератор случайных чисел
	cout << "Матрица: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = rand() % n + 1;
			cout << A[i][j] << " ";
		}
		cout << '\n';
	}
	// удаляем массив из памяти
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;
	return 0;
}
