#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string strok1, strok2, commonCharacter; // strok1 и strok2 — вводимые строки, commonCharcheter — строка для хранения совпадающих символов
    cout << "Введите первую строку: ";
    cin >> strok1;
    cout << "Введите вторую строку: ";
    cin >> strok2;
    for (size_t i = 0; i < strok1.length(); ++i) { // цикл по каждому символу из первой строки
        bool alreadyAdded = false; // флаг для проверки, был ли символ уже добавлен в commonCharacter
        for (size_t j = 0; j < commonCharacter.length(); ++j) { // проверяем, добавлен ли уже символ в commonCharacters
            if (strok1[i] == commonCharacter[j]) {
                alreadyAdded = true; // символ уже добавлен, пропускаем его
                break;
            }
        }
        if (alreadyAdded) continue;  // если символ уже добавлен, переходим к следующему символу 
        for (size_t k = 0; k < strok2.length(); ++k) {  // проверяем, есть ли символ str1[i] во второй строке
            if (strok1[i] == strok2[k]) {
                commonCharacter += strok1[i]; // если символ найден в обеих строках, добавляем его в commonCharacter
                break;
            }
        }
    }
    if (commonCharacter.empty()) {  // если совпадающих символов нет
        cout << "Совпадающих символов нет." << endl;
    }
    else {
        cout << "Совпадающие символы: ";
        for (size_t i = 0; i < commonCharacter.length(); ++i) {
            cout << commonCharacter[i] << " ";
        }
        cout << endl;
    }
    return 0;
}