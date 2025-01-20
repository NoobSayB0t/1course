#include <iostream>
using namespace std;
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива Z: ";
    cin >> n;
    int* Z = new int[n];
    cout << "Введите элементы массива Z: ";
    for (int i = 0; i < n; i++) {
        cin >> Z[i];
    }
    int Count = 0; // считаем количество элементов
    for (int i = 0; i < n; i++) {
        int Duplicate = 0; // 0 — новый, 1 — дубликат
        for (int j = 0; j < i; j++) {
            if (Z[i] == Z[j]) {
                Duplicate = 1; // найден дубликат 
                break;
            }
        }
        if (Duplicate == 0) { 
            Count++; 
        }
    }
    cout << "Количество различных чисел в массиве Z: " << Count << endl; 
    delete[] Z;
}