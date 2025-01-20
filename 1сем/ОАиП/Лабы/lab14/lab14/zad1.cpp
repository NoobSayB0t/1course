#include <iostream>
using namespace std; 

int main() {
    setlocale(LC_ALL, "Russian");
    const int ci = 3, cj = 2;
    int a[ci][cj] = { {1, 2}, {3, 4}, {5, 6} };
    cout << "Первый массив (с индексами): " << endl;
    for (int i = 0; i < ci; i++) {
        for (int j = 0; j < cj; j++) {
            cout << "a[" << i << "," << j << "] = " << a[i][j] << endl;
        }
    }
    int b[ci][cj] = { {7, 8}, {9, 10}, {11, 12} };
    cout << "\nВторой массив (в виде матрицы): " << endl;
    for (int i = 0; i < ci; i++) {
        for (int j = 0; j < cj; j++) {
            cout << b[i][j] << " "; 
        }
        cout << endl; 
    }
    return 0; 
}