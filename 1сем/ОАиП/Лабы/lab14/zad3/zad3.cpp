#include <iostream>
using namespace std;

int main() { 
    setlocale(LC_CTYPE, "Russian"); 
    const int n = 2, m = 4; // размер двумерного массива
    // объявление двумерного массива
    int B[n][m];
    int i, j;

    cout << "Введите элементы массива:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> *(*(B + i) + j);
        }
    }
    cout << "\nИсходный массив:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << "B[" << i << "," << j << "] = " << *(*(B + i) + j) << "\t"; 
        }
        cout << endl;
    }
    for (i = 0; i < n; i++) {
        int* rowStart = *(B + i); // указатель на начало строки
        int min = *rowStart; // предполагаем, что первый элемент строки будет минимальным
        for (j = 1; j < m; j++) { // проходим по строке, начиная со второго элемента
            if (*(rowStart + j) < min) {
                min = *(rowStart + j); // обновление минимального элемента
            }
        }
        cout << "Минимальный элемент строки " << i << ": " << min << endl; 
    }
    return 0; 
}