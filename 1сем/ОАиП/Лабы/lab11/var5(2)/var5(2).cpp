#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int A, B, p, q, n, m;
    char tmp[33];
    cout << "Число A: "; cin >> A;
    cout << "Число B: "; cin >> B;
    cout << "Позиция p (начало битов в A): "; cin >> p;
    cout << "Количество бит n в A: "; cin >> n;
    cout << "Позиция q (начало битов в B): "; cin >> q;
    cout << "Количество бит m в B: "; cin >> m;
    _itoa_s(A, tmp, 2);
    cout << "Число A в двоичном виде: " << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "Число B в двоичном виде: " << tmp << endl;
    int maskA = ((1 << n) - 1) << p; // установка n битов в A начиная с позиции p
    A = A | maskA;
    _itoa_s(A, tmp, 2);
    cout << "Число A после установки битов: " << tmp << endl;
    int Bits = (A >> p) & ((1 << n) - 1); // извлечение n битов из A, начиная с позиции p
    int maskB = ~(((1 << m) - 1) << q); // очистка m битов в B
    B = (B & maskB) | (Bits << q);  // установка новых битов
    _itoa_s(B, tmp, 2);
    cout << "Число B после замены битов: " << tmp << endl;
}