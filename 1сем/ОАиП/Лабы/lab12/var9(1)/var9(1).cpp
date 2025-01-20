#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите количество чисел N: ";
    cin >> N;
    int* A = new int[N];
    cout << "Введите элементы массива A (числа, делящиеся на 2 и 3): ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++) { // удаляем лишние элементы
        for (int j = i + 1; j < N; j++) {
            if (A[i] != 0 && A[j] != 0) {
                if (A[i] % A[j] == 0) 
                {
                    A[j] = 0; // удаляем A[j], если оно делится на A[i]
                }
                else if (A[j] % A[i] == 0) 
                {
                    A[i] = 0; // удаляем A[i], если оно делится на A[j]
                }
            }
        }
    }
    cout << "Оставшиеся элементы массива: "; // выводим оставшихся элементов
    for (int i = 0; i < N; i++) {
        if (A[i] != 0) {
            cout << A[i] << " ";
        }
    }
    cout << endl;
    delete[] A;
}