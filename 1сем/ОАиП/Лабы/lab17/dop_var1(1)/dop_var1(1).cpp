#include <iostream>
using namespace std;

int findSumBetween(int* arr, int size) {
    int maxIndex = -1, minIndex = -1; 
    int maxElement = arr[0], minElement = arr[0]; 
    for (int i = 0; i < size; ++i) { // ищем первый максимальный и последний минимальный элементы
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= minElement) { // последний минимальный
            minElement = arr[i];
            minIndex = i;
        }
    }
    if (maxIndex > minIndex) {  // определяем порядок индексов
        swap(maxIndex, minIndex);
    }
    int sum = 0;  
    for (int i = maxIndex + 1; i < minIndex; ++i) {
        sum += arr[i];
    }
    return sum;
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
    int sum = findSumBetween(arr, size);
    cout << "Сумма элементов между первым максимальным и последним минимальным: " << sum << endl;

    delete[] arr;
   return 0;
}