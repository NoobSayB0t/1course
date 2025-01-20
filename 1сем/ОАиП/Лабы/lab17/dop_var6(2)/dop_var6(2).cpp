#include <iostream>
using namespace std;
void Zero(int** matrix, int n, int m) { 
    bool zero = true; // осуществляем поиск с помощью флагов
    for (int i = 0; i < n; i++) {
        bool zero1 = false;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                zero1 = true;
                break;
            }
        }
        if (!zero1) {
            zero = false;
            break;
        }
    }
    if (!zero) { // если элемент не равен 0, то меняем все отрицательные значения на нулевые
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian"); 
    int n, m; 
    cout << "Введите количество строк и столбцов: ";
    cin >> n >> m;
    int** matrix = new int* [n]; // создаём динамический массив
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    cout << "Введите элементы матрицы: " << endl; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    Zero(matrix, n, m);
    cout << "Измененная матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix; // очищаем динамическую память
   return 0;
}
