#include <iostream>
#include <string>
using namespace std;

int countMaxOccurrences(int* M, int size); // прототип функции для работы с одномерным массивом
void findShortestAndLongestWord(); // прототип функции для работы со строками

int main(void)
{
    setlocale(LC_CTYPE, "Russian"); 
    int choice; 
    do
    {
        // меню выбора
        cout << "Выберите вариант работы" << endl;
        cout << "1 - с одномерным массивом" << endl;
        cout << "2 - с текстовой строкой" << endl;
        cout << "3 - выход" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            int* M, size;
            cout << "Введите размер массива: ";
            cin >> size;

            if (size <= 0) {
                cout << "Размер массива должен быть положительным." << endl;
                break;
            }

            M = new int[size]; // выделяем память для массива
            for (int i = 0; i < size; i++)
            {
                cout << "Введите " << i + 1 << " число: ";
                cin >> *(M + i);
            }

            int count = countMaxOccurrences(M, size); // вызов функции для подсчёта вхождений максимального числа
            cout << "Максимальное число встречается " << count << " раз." << endl;

            delete[] M; // освобождение память из массива
            break;
        }
        case 2:
            findShortestAndLongestWord();
            break;
        case 3:
            cout << "Выход из программы." << endl; // завершение работы программы
            break;
        default:
            cout << "Некорректный выбор, попробуйте снова." << endl;     // сообщение при некорректном вводе
        }
    } while (choice != 3); // цикл продолжается, пока не выбран выход "3"
    return 0;
}

int countMaxOccurrences(int* M, int size) // функция для подсчёта количества вхождений максимального числа в массиве

{
    int maxNum = M[0]; // инициализация первого элемента как максимального
    int count = 0; // счётчик количества вхождений
    for (int i = 0; i < size; i++)
    {
        if (*(M + i) > maxNum) {
            maxNum = *(M + i); // обновляем максимальное число
            count = 1; // сбрасываем счётчик
        }
        else if (*(M + i) == maxNum) {
            count++; // увеличиваем счётчик, если число равно текущему максимуму
        }
    }
    return count;
}


void findShortestAndLongestWord() // функция для поиска самого короткого и самого длинного слова в строке
{ 
    cin.ignore(); // очищаем буфера ввода после выбора в меню
    string input;
    cout << "Введите строку: ";
    getline(cin, input); // ввод строки от пользователя
    string shortestWord = "", longestWord = ""; // переменные для самого короткого и длинного слова
    string currentWord = ""; // переменная для текущего слова
    int minLength = input.length(), maxLength = 0; // инициализация длины слов

    for (char c: input) // перебор символов строки
    {
        if (c == ' ' || c == '\t') {
            if (!currentWord.empty()) {  // если встретился пробел, проверяем текущее слово
                if (shortestWord.empty() || currentWord.length() < minLength) { 
                    shortestWord = currentWord;  // устанавливаем текущее слово как самое короткое
                    minLength = currentWord.length(); 
                }
                if (currentWord.length() > maxLength) {
                    longestWord = currentWord;  // устанавливаем текущее слово как самое длинное
                    maxLength = currentWord.length();
                }
            }
        else {
            currentWord += c; // добавляем символ к текущему слову
        }
    }

    if (!currentWord.empty()) {  // проверяем последнего слова (если строка не заканчивается пробелом)
        if (currentWord.length() < minLength) {
            shortestWord = currentWord;
        }
        if (currentWord.length() > maxLength) {
            longestWord = currentWord;
        }
    }

    if (shortestWord.empty() || longestWord.empty()) {
        cout << "Введена пустая строка или отсутствуют слова." << endl;
    }
    else {
        cout << "Самое короткое слово: " << shortestWord << endl;
        cout << "Самое длинное слово: " << longestWord << endl;
    }
}
