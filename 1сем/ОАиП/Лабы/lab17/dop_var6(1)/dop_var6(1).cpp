#include <iostream>
using namespace std;

int massiv(int* mas, int size) {
    int min = mas[0], max = mas[0], sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] < min) { // находим минимальный элемент
            min = mas[i]; 
        }
        if (mas[i] > max) { // находим максимальный элемент
            max = mas[i]; 
        }
        if (max > mas[i] || min < mas[i]) {
            sum = max + min; // находим сумму
        }
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size; 
    cout << "Введите длину массива: ";
    cin >> size;
    int* mas = new int[size]; // создаём динамический массив
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++)
    {
        cin >> mas[i]; // вводим элементы массива
    }
    cout << "Сумма максимального и минимального элементов равна: " << massiv(mas, size);
    delete[] mas; // очищаем память из массива
}
