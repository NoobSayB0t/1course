#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    const int n = 3, m = 3; // размер матрицы
    int matrix[n][m] = { {1, -2, 3}, {4, 5, 6}, {7, 8, 9} };
    int negativeRow = -1; // номер строки с отрицательным элементом

    for (int i = 0; i < n; ++i) { // поиск строки с отрицательным элементом
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < 0) {
                negativeRow = i;
                break;
            }
        }
        if (negativeRow != -1) break; // прекращаем поиск, если строка найдена
    }

    if (negativeRow != -1) {
        cout << "Строка с отрицательным элементом найдена: " << negativeRow + 1 << endl;

        for (int i = 0; i < n; ++i) { // уменьшение всех элементов столбца с таким же номером вдвое
            matrix[i][negativeRow] /= 2;
        }
    }
    else {
        cout << "В матрице нет строк с отрицательными элементами." << endl;
    }
    cout << "Изменённая матрица:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}