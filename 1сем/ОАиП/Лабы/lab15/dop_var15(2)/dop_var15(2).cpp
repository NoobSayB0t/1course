#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int row, column;
    cout << "Введите количество строк (row): ";
    cin >> row;
    cout << "Введите количество столбцов (column): ";
    cin >> column;
    int** matrix = new int* [row]; // создание динамической матрицы
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix[i][j];
        }
    }
    // проверка, содержат ли все строки хотя бы один нулевой элемент
    bool allRowsHaveZero = true; // флаг, что все строки содержат хотя бы один ноль
    for (int i = 0; i < row; ++i) {
        bool rowHasZero = false;
        for (int j = 0; j < column; ++j) {
            if (matrix[i][j] == 0) {
                rowHasZero = true;
                break;
            }
        }
        if (!rowHasZero) {
            allRowsHaveZero = false;
            break;
        }
    }
    if (!allRowsHaveZero) { // если не все строки содержат хотя бы один нулевой элемент, заменяем отрицательные элементы на нули
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                if (matrix[i][j] < 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    cout << "Изменённая матрица:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix; // освобождение динамической памяти

   return 0;
}