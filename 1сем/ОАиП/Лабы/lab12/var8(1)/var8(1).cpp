#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int k, n;
    cout << "Введите размер массива X: ";
    cin >> k;
    cout << "Введите размер массива Y: ";
    cin >> n;
    int* X = new int[k];
    int* Y = new int[n];
    cout << "Введите элементы массива X: ";
    for (int i = 0; i < k; i++) {
        cin >> X[i];
    }
    cout << "Введите элементы массива Y: ";
    for (int i = 0; i < n; i++) {
        cin >> Y[i];
    }
    int* Z = new int[min(k, n)]; // создаём массива Z для пересечения
    int newZ = 0; 
    // находим пересечения массивов
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (X[i] == Y[j]) { // если элемент X[i] есть в Y
                int elementexists = 0; // проверка, нет ли уже этого элемента в Z; используем 0 = ложь
                for (int z = 0; z < newZ; z++) {
                    if (Z[z] == X[i]) 
                    {
                        elementexists = 1; // 1 = истина
                        break;
                    }
                }
                if (elementexists == 0) { // если элемент отсутствует или еще не добавлен 
                    Z[newZ] = X[i]; 
                    newZ++; 
                }
            }
        }
    }
    cout << "Пересечение массивов (массив Z): ";
    if (newZ == 0) {
        cout << "нет общих элементов";
    }
    else {
        for (int i = 0; i < newZ; i++) {
            cout << Z[i] << " ";
        }
    }
    cout << endl;
    delete[] X;
    delete[] Y;
    delete[] Z;
}