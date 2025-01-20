#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;

int matrix(int** A, int N, int M, int k) { // подключение двух функций для матрицы и строки
	return 0;
}
int massiv(char str1, char str) {
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	do //диалоговая программа с решением наших задач
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с матрицей" << endl;
		cout << "2 - со строкой" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: { // работа с матрицей
			int** A, N, M; // инициализация переменных
			bool found = false; // инициализация флага
			cout << "Введите число строк: ";
			cin >> N;
			cout << "Введите число столбцов: ";
			cin >> M;
			A = new int* [N]; // инициализация динамического массива
			for (int i = 0; i < N; i++) {
				A[i] = new int[M];
			}
			cout << "Введите матрицу: " << endl;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout << "A(" << i + 1 << ", " << j + 1 << "): ";
					cin >> A[i][j];
				}
			}
			cout << "Исходная матрица: " << endl;
			for (int i = 0; i < N; i++)
			{
				cout << "[";
				for (int j = 0; j < M; j++)
				{
					cout << " " << A[i][j] << " ";
				}
				cout << "]" << endl;
			}
			int maxElement = A[0][0]; // иницмализация максимального элемента 
			int positions[100][2]; // предполагаем, что максимальных элементов не больше 100
			int posCount = 0; // счетчик позиции максимального элемента
			int sum = 0; // ининициализируем переменную, которая будет суммировать элементы, которые ниже главное диагонали
			for (int i = 0; i < N; i++) { //с помощью цикла находим один или несколько максимальных элементов и их позиции
				for (int j = 0; j < M; j++) {
					if (A[i][j] > maxElement) {
						maxElement = A[i][j];
						posCount = 0;
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					else if (A[i][j] == maxElement) {
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					if (i > j) { // находим сумму элементов, которые ниже главной диагонали
						sum += A[i][j];
					}
				}
			}
			cout << "Максимальный элемент: " << maxElement << endl;
			cout << "Позиции максимального элемента: " << endl;
			for (int i = 0; i < posCount; i++) {
				cout << "(" << positions[i][0] + 1 << ", " << positions[i][1] + 1 << ")" << endl;
			}
			cout << "Сумма элементов ниже главной диагонали: " << sum << endl;
			break;
		}
			  //работа со строкой
		case 2: {
			setlocale(LC_ALL, "Russian");
			char str1[50], str[] = "*"; // объявление двух массивов
			int n; // объявление переменной, которая показывает содержание символов в строке
			cout << "Введите строку: ";
			cin >> str1;
			n = strlen(str1); // находим длину строки
			// создаем цикл for, который проходит по символам строки и ищет "а"
			for (int i = 0; str1[i] != '\0'; i++) {
				if (str1[i] == 'c')
				{
					// если в строке есть символ "а", то после его необходимо вставить "!"
					for (int j = n + 1; j != i; j--)
					{
						str1[j + 1] = str1[j];
					}
					str1[i + 1] = '*';
				}
			}
			cout << "Вывод строки: " << str1 << endl;
			break;
		}
		case 3:
			break; // выход из программы
		}
	} while (choice != 3); // работаем с диалогом, пока не выберем 3 вариант 
	return 0;
}
