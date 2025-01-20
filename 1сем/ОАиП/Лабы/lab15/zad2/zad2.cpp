#include <iostream>
using namespace std;
void main() {
    setlocale(LC_CTYPE, "Russian"); 
    char* pStr; // указатель для динамического массива
    char c, * pC;
    int j, length, count = 0;
    cout << "Введите размер строки" << endl;
    cin >> length;
    pStr = new char[length + 1]; // выделение динамической памяти
    cout << "Введите строку" << endl;
    cin >> pStr;
    cout << "Введите символ " << endl;
    cin >> c;
    pC = &c; // указатель на символ
    for (j = 0; j < length; j++) {  // подсчет повторений символа
        if (pStr[j] == *pC) {
            count++;
        }
    }
    cout << count << " повторений символа " << c << endl;
    delete[] pStr; // освобождение памяти
}