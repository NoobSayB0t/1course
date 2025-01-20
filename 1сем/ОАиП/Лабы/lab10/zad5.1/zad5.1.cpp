#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int arr[] = {3, 7, 2, 8, 1, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    for (int i = 1; i < n; i += 2) {
        arr[i] = maxElement;
    }
    cout << "Изменённый массив = ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}