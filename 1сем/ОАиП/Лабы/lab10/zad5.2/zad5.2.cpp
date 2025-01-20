#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int arr[] = { 3, 7, 2, 8, 1, 9, 4 }; 
    int k = sizeof(arr) / sizeof(arr[0]); // размер массива 
    int сount = 0; // счёт инверсий
    for (int i = 0; i < k - 1; ++i) { // перебор все пары элементов
        for (int j = i + 1; j < k; ++j) // проверка, является ли пара инверсией
        { 
            if (arr[i] > arr[j]) 
            {
                ++сount;  
            }
        }
    }
    cout << "Количество инверсий: " << сount << endl;  

    return 0;
}