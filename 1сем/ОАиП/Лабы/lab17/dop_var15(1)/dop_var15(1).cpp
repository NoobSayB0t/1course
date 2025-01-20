#include <iostream>
using namespace std;

int countNegativeAfterLastMin(int* arr, int size) {
    int minIndex = 0;
    int minElement = arr[0];
    for (int i = 0; i < size; ++i) { // найдём индекс последнего минимального элемента
        if (arr[i] <= minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }

    int negativeCount = 0; 
    for (int i = minIndex + 1; i < size; ++i) {  // подсчитаем количество отрицательных элементов после последнего минимального
        if (arr[i] < 0) {
            ++negativeCount;
        }
    }

    return negativeCount;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int negativeCount = countNegativeAfterLastMin(arr, size);
    cout << "Количество отрицательных элементов после последнего минимального: " << negativeCount << endl;
    delete[] arr;
   return 0;
}
