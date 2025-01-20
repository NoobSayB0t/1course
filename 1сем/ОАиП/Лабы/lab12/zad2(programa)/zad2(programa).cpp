#include <iostream>
#include <ctime>   // для srand(time(0))
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* A = new int[n]; // динамическое выделение памяти для массива
    srand(time(0));   // инициализация генератора случайных чисел
    for (int i = 0; i < n; i++)
        *(A + i) = rand() % 99; // генерация случайных чисел от 0 до 98
    cout << "Случайный массив: "; // выводим массив
    for (int i = 0; i < n; i++)
        cout << *(A + i) << " ";
    cout << endl;
    // находим максимальный элемент без указателей
    int max1 = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max1) {
            max1 = A[i];
        }
    }
    cout << "Максимальный элемент (без указателей): " << max1 << endl;
    // находим максимальный элемент с использованием указателей
    int max2 = *A;
    for (int i = 1; i < n; i++) {
        if (*(A + i) > max2) {
            max2 = *(A + i);
        }
    }
    cout << "Максимальный элемент (с указателями): " << max2 << endl;
    delete[] A; // освобождаем память
}