#include <iostream>
#include <cmath> // для использования функции floor()
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double c;
    cout << "Введите количество элементов массива (n): ";
    cin >> n;
    double* array = new double[n]; // создаём динамический массив
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    cout << "Введите число c: ";
    cin >> c;
    int countless = 0; // счет количества элементов, меньших c
    for (int i = 0; i < n; ++i) {
        if (array[i] < c) {
            ++countless;
        }
    }
    int NegativeIndex = -1; // нахождение индекса последнего отрицательного элемента
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            NegativeIndex = i;
        }
    }
    int sum= 0; // сумма целых частей элементов после последнего отрицательного элемента
    if (NegativeIndex != -1) { // проверка, был ли отрицательный элемент
        for (int i = NegativeIndex + 1; i < n; ++i) {
            sum += static_cast<int>(floor(array[i]));// отбрасываем дробную часть
        }
    }
    cout << "Количество элементов массива, меньших " << c << ": " << countless << endl;
    cout << "Сумма целых частей элементов после последнего отрицательного элемента: " << sum << endl;
    delete[] array; // освобождение динамеческой памяти

   return 0;
}