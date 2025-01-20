#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "Введите размер массива A: ";
    cin >> n;
    cout << "Введите размер массива B: ";
    cin >> m;
    int* A = new int[n];
    int* B = new int[m];
    cout << "Введите элементы массива A: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Введите элементы массива B: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
    int maxA = A[0]; // находим наибольший элемент в массиве A
    for (int i = 1; i < n; i++) {
        if (A[i] > maxA) {
            maxA = A[i];
        }
    }
    int found = 0; // проверяем, содержится ли maxA в массиве B. Используем 0, если не найден 
    for (int i = 0; i < m; i++) {
        if (B[i] == maxA) {
            found = 1; // используем 1, если найден
        }
    }
    if (found == 1) {
        cout << "Наибольший элемент массива A содержится в массиве B. ";
    }
    else {
        cout << "Наибольший элемент массива A не содержится в массиве B.";
    }
    delete[] A; // освобождаем память
    delete[] B; // освобождаем память
}