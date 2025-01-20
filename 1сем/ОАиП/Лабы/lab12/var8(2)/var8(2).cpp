#include <iostream>
#include <cmath> // для использования модуля(abs)
int main() {
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int k, n, q;
    cout << "Введите размер массива x: ";
    cin >> k;
    cout << "Введите размер массива y: ";
    cin >> n;
    cout << "Введите число q: ";
    cin >> q;
    int* x = new int[k];
    int* y = new int[n];
    cout << "Введите элементы массива x: ";
    for (int i = 0; i < k; i++) {
        cin >> x[i];
    }
    cout << "Введите элементы массива y: ";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    int Sum = x[0] + y[0]; // хранение результата
    int minDiff = abs(Sum - q); 
    for (int i = 0; i < k; i++) { // Поиск наиболее близкой суммы
        for (int j = 0; j < n; j++) {
            int newSum = x[i] + y[j]; 
            int newDiff = abs(newSum - q); 

            
            if (newDiff < minDiff) { // если найденная разница меньше минимальной
                Sum = newSum; 
                minDiff = newDiff; 
            }
        }
    }
    cout << "Наиболее близкая сумма: " << Sum << endl;
    delete[] x; // освобождаем память
    delete[] y; // освобождаем память
}