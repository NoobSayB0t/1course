#include <iostream>
using namespace std;

void processArray(double* arr, int size, int& resultIndex) {
    for (int i = 0; i < size; ++i) { // замена отрицательных элементов их квадратами
        if (arr[i] < 0) {
            arr[i] = arr[i] * arr[i];
        }
    }
    double totalSum = 0; // поиск индекса, где разница между суммами минимальна
    for (int i = 0; i < size; ++i) {
        totalSum += arr[i];
    }

    double leftSum = 0;
    double minDifference = 1e9; // большое значение для инициализации
    for (int i = 0; i < size; ++i) {
        double rightSum = totalSum - leftSum - arr[i];
        double difference = (leftSum > rightSum) ? (leftSum - rightSum) : (rightSum - leftSum); // модуль разности
        if (difference < minDifference) {
            minDifference = difference;
            resultIndex = i;
        }
        leftSum += arr[i];
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    double* arr = new double[size];
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int resultIndex = 0;
    processArray(arr, size, resultIndex);

    cout << "Измененный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Индекс элемента с минимальной разницей сумм: " << resultIndex << endl;

    delete[] arr; // освобождаем динамическую память
   return 0;
}