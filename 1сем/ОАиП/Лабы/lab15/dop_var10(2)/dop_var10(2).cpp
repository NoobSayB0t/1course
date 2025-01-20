#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int row, column;
    cout << "Введите количество строк (row): ";
    cin >> row;
    cout << "Введите количество столбцов (column): ";
    cin >> column;

    // Создание динамической матрицы
    int** matrix = new int* [row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }

    // Ввод элементов матрицы
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Поиск первой строки, где все элементы отрицательны
    int firstNegRow = -1;
    for (int i = 0; i < row; ++i) {
        bool allNegative = true;
        for (int j = 0; j < column; ++j) {
            if (matrix[i][j] >= 0) {
                allNegative = false;
                break;
            }
        }
        if (allNegative) {
            firstNegRow = i;
            break;
        }
    }

    // Если такая строка найдена, увеличиваем элементы матрицы на значение первого элемента строки
    if (firstNegRow != -1) {
        int increment = matrix[firstNegRow][0];
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                matrix[i][j] += increment;
            }
        }
    }

    // Вывод измененной матрицы
    cout << "Измененная матрица:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Очистка памяти
    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
