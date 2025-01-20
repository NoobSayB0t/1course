#include <iostream>
using namespace std;

void processMatrix(double** matrix, int rows, int cols, int& Index) {
    Index = -1;
    for (int j = 0; j < cols; ++j) { // проверяем столбцы на наличие отрицательных элементов
        bool hasNegative = false;
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }
        if (hasNegative) { // если найдётся столбец с отрицательным элементом, запоминаем его индекс и уменьшаем элементы вдвое
            Index = j; 
            for (int i = 0; i < rows; ++i) {
                matrix[i][j] /= 2;
            }
            break; // будет достаточно найти только первый такой столбец
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;
    double** matrix = new double* [rows];  // создание динамической матрицы
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }

    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    int Index = -1;
    processMatrix(matrix, rows, cols, Index);
    cout << "Измененная матрица:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    if (Index != -1) {
        cout << "Первый столбец с отрицательным элементом: " << Index << endl;
    }
    else {
        cout << "Столбцов с отрицательными элементами нет" << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix; // освобождаем динамическую память

    return 0;
}
