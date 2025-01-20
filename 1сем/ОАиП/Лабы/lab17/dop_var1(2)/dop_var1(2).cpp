#include <iostream>
using namespace std;

bool AllPositive(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] <= 0) {
                return false;
            }
        }
    }
    return true;
}

void multiplyMatrices(int** mat1, int** mat2, int** result, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер матриц: ";
    cin >> size;

    int** mat1 = new int* [size]; // создаём матрицы
    int** mat2 = new int* [size];
    int** result = new int* [size];

    for (int i = 0; i < size; ++i) {
        mat1[i] = new int[size];
        mat2[i] = new int[size];
        result[i] = new int[size];
    }

    cout << "Введите элементы первой матрицы: " << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> mat1[i][j];
        }
    }

    cout << "Введите элементы второй матрицы: " << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> mat2[i][j];
        }
    }

    if (AllPositive(mat1, size) && AllPositive(mat2, size)) { // проверяем, что все числа положительные
        multiplyMatrices(mat1, mat2, result, size);

        cout << "Результат произведения матриц: " << endl;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Не все числа положительные, умножение невозможно" << endl;
    }

    // освобождаем динамичскую память матриц
    for (int i = 0; i < size; ++i) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] result[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] result;

    return 0;
}