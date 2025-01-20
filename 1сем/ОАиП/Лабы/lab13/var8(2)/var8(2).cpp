#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string binarString, currentGroup; // строка для ввода и временная строка для текущей группы
    bool hasGroups = false; // флаг, показывающий, найдены ли группы с четным количеством символов
    cout << "Введите строку из нулей и единиц: ";  
    cin >> binarString; // ввод строки из нулей и единиц
    cout << "Группы с четным количеством символов: " << endl; // ввод заголовка для групп с четным количеством символов
    for (size_t i = 0; i < binarString.length(); ++i) { // проходим по каждому символу строки
        if (binarString[i] == '0' || binarString[i] == '1') { // если символ — это '0' или '1', добавляем его в текущую группу
            currentGroup += binarString[i]; 
        }
        else {
            if (!currentGroup.empty() && currentGroup.length() % 2 == 0) { // если встретился символ, не являющийся '0' или '1', обрабатываем текущую группу
                cout << currentGroup << endl;
                hasGroups = true; // устанавливаем флаг, что хотя бы одна группа найдена
            }
            currentGroup.clear(); // очищаем текущую группу
        }
    }
    if (!currentGroup.empty() && currentGroup.length() % 2 == 0) { // проверяем последнюю группу
        cout << currentGroup << endl;
        hasGroups = true; // устанавливаем флаг, что хотя бы одна группа найдена
    }
    if (!hasGroups) // если не было найдено ни одной группы, сообщаем
    {
        cout << "Нет групп с четным количеством символов" << endl;
    }
    return 0;
}