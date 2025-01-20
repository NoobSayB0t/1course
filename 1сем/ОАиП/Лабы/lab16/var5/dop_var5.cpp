#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;



void processMatrix() { // функция для работы с матрицей
    int** A, N, M;
    cout << "Введите число строк: ";
    cin >> N;
    cout << "Введите число столбцов: ";
    cin >> M;


    A = new int* [N]; // выделяем память для матрицы
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "A(" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // ищем минимальные элементы в строках
    int maxOfMin = INT_MIN; // максимум среди минимальных(можно было обойтись, не использовав библиотеку <Windows.h>, а записать значение переменной как 1e9
    int rowWithMaxMin = -1; // номер строки с максимальным из минимальных

    for (int i = 0; i < N; i++) {
        int minInRow = A[i][0]; // минимум в текущей строке
        for (int j = 1; j < M; j++) {
            if (A[i][j] < minInRow) {
                minInRow = A[i][j];
            }
        }
        if (minInRow > maxOfMin) {
            maxOfMin = minInRow;
            rowWithMaxMin = i + 1; // запоминаем номер строки (с 1)
        }
    }

    cout << "Максимальный из минимальных элементов: " << maxOfMin << endl;
    cout << "Номер строки с этим элементом: " << rowWithMaxMin << endl;

    for (int i = 0; i < N; i++) { // освобождаем память
        delete[] A[i];
    }
    delete[] A;
}

void processText() { // функция для работы с текстом
    cin.ignore(); // очищаем буфер после ввода
    string text;
    char searchChar;

    cout << "Введите текст (несколько строк, завершите ввод пустой строкой):" << endl;
    getline(cin, text); // чтение текста

    cout << "Введите символ для поиска: ";
    cin >> searchChar;

    int count = 0; // подсчёт вхождений символа
    for (char c : text) {
        if (c == searchChar) {
            count++;
        }
    }

    cout << "Символ '" << searchChar << "' встречается " << count << " раз." << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;
    do {
        cout << "Выберите вариант работы:" << endl;
        cout << "1 - работа с матрицей" << endl;
        cout << "2 - работа с текстовой строкой" << endl;
        cout << "3 - выход" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            processMatrix();
            break;
        case 2:
            processText();
            break;
        case 3:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 3);

    return 0;
}