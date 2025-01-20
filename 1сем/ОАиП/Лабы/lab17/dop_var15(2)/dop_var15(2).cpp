#include <iostream>
using namespace std;

bool hasPositiveElement(int** matrix, int rows, int col) { // проверяем, содержит ли столбец хотя бы один положительный элемент
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][col] > 0) {
            return true;
        }
    }
    return false;
}

void replaceNegativesWithAbs(int** matrix, int rows, int col) { // заменяем отрицательные элементы в столбце на их модули
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][col] < 0) {
            matrix[i][col] = -matrix[i][col];
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    int** matrix = new int* [rows]; // создаём динамическую матрицу
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    bool ColumnsHavePositive = true; // Проверка каждого столбца
    int firstInvalidCol = -1;

    for (int j = 0; j < cols; ++j) {
        if (!hasPositiveElement(matrix, rows, j)) {
            ColumnsHavePositive = false;
            firstInvalidCol = j;
            break;
        }
    }

    if (ColumnsHavePositive) {
        cout << "Все столбцы содержат хотя бы один положительный элемент." << endl;
    }
    else {
        cout << "Первый столбец без положительных элементов: " << firstInvalidCol << endl;
        replaceNegativesWithAbs(matrix, rows, firstInvalidCol);
        cout << "Измененная матрица:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < rows; ++i) {
       delete[] matrix[i];
    }
    delete[] matrix;
   return 0;
}
