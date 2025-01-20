#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    double* arr = new double[n]; // создаем динамический массив
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    double sumPositive = 0; // сумма положительных элементов
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
        }
    }
    int maxIndex = 0, minIndex = 0; // поиск максимального и минимального по модулю элементов
    for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) > abs(arr[maxIndex])) {
            maxIndex = i;
        }
        if (abs(arr[i]) < abs(arr[minIndex])) {
            minIndex = i;
        }
    }
    double product = 1;  // вычисление произведения между maxIndex и minIndex
    if (maxIndex > minIndex) {
        swap(maxIndex, minIndex);
    }
    for (int i = maxIndex + 1; i < minIndex; ++i) {
        product *= arr[i];
    }
    cout << "Сумма положительных элементов: " << sumPositive << endl;
    cout << "Произведение элементов между максимальным и минимальным по модулю: " << product << endl;
    delete[] arr; // освобождаем динамическую память
   return 0;
}
